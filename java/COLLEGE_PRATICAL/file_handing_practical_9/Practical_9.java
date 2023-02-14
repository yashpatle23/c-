package file_handing_practical_9;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;


public class Practical_9{
    public static void main(String args[]){
        createfile();
        write_odd_even();
    }
    public static void createfile(){
        try{
            FileWriter numbers=new FileWriter("numbers.txt");
            numbers.write("23 5 6 76 54 3 44 5");
            
            numbers.close();
        }
        catch(Exception e){
            System.out.println("unable to create a number.txt file"+e);
        }
    }
    public static void write_odd_even(){
        try{
            FileWriter odd=new FileWriter("odd.txt");
            FileWriter even=new FileWriter("even.txt");
            File num_obj=new File("numbers.txt");
            Scanner num_scanner=new Scanner(num_obj);
            while(num_scanner.hasNext()){
                String tem=num_scanner.next();
                int int_tem=Integer.parseInt(tem);
                if(int_tem%2==0) even.write(tem+" ");
                else odd.write(tem+" ");
            }
            odd.close();
            even.close();
            num_scanner.close();
        }
    catch(IOException e){
        System.out.println("error occured during writting file");
    }
    
    }
}