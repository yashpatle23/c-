import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.file.Files;
import java.util.Scanner;

public class copyFile {
    public static void main(String[] args) throws FileNotFoundException {
        File source = new File("C:\Users\Yash\Desktop\c+++\java_file_handaling\abc.txt");
        File dest = new File("C:\Users\Yash\Desktop\c+++\java_file_handaling\xyz.txt");
        int count1 = 0, count2 = 0, count3 = 0;
        
        try {
            Files.copy(source.toPath(), dest.toPath());
        } catch (Exception e) {
            System.out.println("Unable to copy");
        }
        String word = " the ";
        String word1 = "The ";
        String word2="An ";
        String word3=" an ";
        String word4=" is ";
        String word5=" was ";
        boolean flag = false;
        int count = 0;
        System.out.println("Contents of the line");
        // Reading the contents of the file
        Scanner sc2 = new Scanner(new FileInputStream());
        while (sc2.hasNextLine()) {
            String line = sc2.nextLine();
            System.out.println(line);
            while(line.hasNext()){
                String tem=line.Next();
                if (tem.equals(word)||tem.equls(word1) ) {
                    flag = true;
                    count = count + 1;
                }
                if (tem.equals(word2)||tem.equals(word3) ) {
                    flag = true;
                    count1 = count1 + 1;
                }
                if (tem.equals(word4) ) {
                    flag = true;
                    count2 = count2 + 1;
                }
                if (tem.equals(word5)) {
                    flag = true;
                    count3 = count3 + 1;
            }
        }
        }
        if (flag) {
            System.out.println("File contains the specified word");
            System.out.println("Number of occurrences of 'the' : " + count);
            System.out.println("Number of occurrences of 'an' : " + count1);
            System.out.println("Number of occurrences of 'is' : " + count2);
            System.out.println("Number of occurrences of 'was' : " + count3);
        } else {
            System.out.println("File does not contain the specified word");
        }
    }
}