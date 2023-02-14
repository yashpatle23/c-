package Thread;
class Table
{
    void printable(int n)
    {
        for (int i=1;i<=5;i++)
        {
            System.out.println("n*i");
           
        } 
    }
}
class THR extends Thread
{
    Table t;
   THR(Table t)
    {
        this.t=t;
    }
    public void run()
    {
        t.printable(5);
    }
  
}
class THR1 extends Thread
{
    Table t;
   THR1 (Table t)
    {
        this.t=t;
    }
    
    public void run()
    {
       t. printable(100);
    }
    
}

class test 
{
public static void main(String[] args) {
    

    {
    Table obj=new Table();
  THR t1= new THR(obj);
    THR1 t2=new THR1(obj);
    t1.start();
    t2.start();    
    }
}
}