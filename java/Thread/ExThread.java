package Thread;

class A extends Thread
{
    public void run ()
    {
    for (int i = 1; i <= 5; i++)
    {
	if (i == 1) System.out.println ("\t From Thread A:i=" + i);
    }
    System.out.println ("Exit from A");
}
}
class  B extends Thread
{
    public void run()
    {
        for (int j=1;j<=5;j++)
        {
            System.out.println("\t From Thread B:j="+j);
            if (j==1)stop();
            
        }
        System.out.println("Exit from B");
    }
}
class   C extends Thread
{
    public void run()
    {
        for (int k=1;k<=5;k++)
        {
            System.out.println("\t From Thread C:j="+k);
            if (k==1)
            try {
                    sleep(1000);
                }
            catch(Exception e) 
            {} 
        }
        System.out.println("Exit from C");
    }
}
public class ExThread
{
    public static void main (String[] args) 
    {
        System.out.println("Start Thread A");
        new A().start();
        System.out.println("Start Thread B");
        new B().start();
        System.out.println("Start Thread C");
        new C().start();
    }
    
}