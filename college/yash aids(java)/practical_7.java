import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.NoSuchElementException;
import java.util.Scanner;
import java.io.FileNotFoundException;


public class practical_7 {
    public static void main(String args[]){
        createfile();
        readwritefile();
        System.out.println("the practical 7 is succesfully exicuted");
    }
    public static void createfile(){
        try{
            FileWriter myfile=new FileWriter("abc.txt");
            myfile.write("Take the risk or lose the chance bih");
            myfile.close();
            System.out.println("the file is created");
        }catch (IOException e) {
            System.out.println("an error occurred.");
        }
    }
    public static void readwritefile(){
        int i=0;
        try{
            File fileobj=new File("abc.txt");
            FileWriter myfile2=new FileWriter("xyz.txt");
            Scanner myreader=new Scanner(fileobj);
            while(myreader.hasNext()){
                String data =myreader.next();
                if(data.length()<4){
                    myfile2.write(data+" ");
                    i++;
                }

            }
            myfile2.close();
            myreader.close();
        }catch(FileNotFoundException e){
            System.out.println("file not found");
        }catch(IOException e){
            System.out.println("error has occurred during making next file");
        }catch(NoSuchElementException e){
            System.out.println("error no such element");
        }
        System.out.println("the count of all the keyword is "+i);
    }
       
}
