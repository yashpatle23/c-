
import java.lang.Exception;
import java.util.Scanner;

public class pr8 {
    public static void main(String[] args) {
        System.out.print("Enter the password:");
        String pass="1234";
        Scanner scan = new Scanner(System.in);
        String attempt = scan.nextLine();
                
            try 
            {
                if(attempt.equals(pass))
                {
                    System.out.println("Access Granted.");
                }
                else
                {
                    throw new Exception("Access Denied: Incorrect Password");
                }
             } 
            catch (Exception e) 
            {
                System.out.println("\n"+e);
                System.out.println("ERROR");
            }
    }
                
}