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
            myfile.write("In the 14th century, Guillaume Tirel, a court chef known as Taillevent, wrote Le Viandier, one of the earliest recipe collections of medieval France.");
            myfile.close();
            System.out.println("the file is created");
        }catch (IOException e) {
            System.out.println("an error occurred.");
        }
    }
    public static void readwritefile(){
        int ti=0,ani=0,ai=0;
        String the="the",an="an",a="a";
        String The="The",An="An",A="A";
        try{
            File fileobj=new File("abc.txt");
            FileWriter myfile2=new FileWriter("xyz.txt");
            Scanner myreader=new Scanner(fileobj);
            while(myreader.hasNext()){
                String data =myreader.next();
                if(data.equals(the)||data.equals(The)){
                    myfile2.write(data+" ");
                    ti++;
                }
                else if(data.equals(an)||data.equals(An)){
                    myfile2.write(data+" ");
                    ani++;
                }
                else if(data.equals(a)||data.equals(A)){
                    myfile2.write(data+" ");
                    ai++;
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
        System.out.println("the count of all the keyword 'the' is "+ti);
        System.out.println("the count of all the keyword 'a' is "+ani);
        System.out.println("the count of all the keyword 'an' is "+ai);
    }
}