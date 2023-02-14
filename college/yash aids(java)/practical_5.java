public class practical_5 {
    public static void main(String args[]){
        new A(78, 99, 89);
        new B(77, 87, 99, 100);
    }
}
abstract class Marks{
    abstract public float getPercentage(int a1,int a2,int a3);
    public float getPercentage(int a1,int a2,int a3,int a4){
        float per;
        per=(a1+a2+a3+a4)/4F;
        return per;
    }
}
class A extends Marks{
    public A(int a1, int a2, int a3){
        float per;
        per=getPercentage(a1,a2,a3);
        System.out.println("The percentage of 1st student is "+per+"%."); 
    }
    public float getPercentage(int a1,int a2,int a3){
        float per;
        per=(a1+a2+a3)/3F;
        return per;
    }      
}
class B extends Marks{
    public B(int a1, int a2, int a3, int a4){
        float per=getPercentage(a1,a2,a3,a4);
        System.out.println("The percentage of 2nd student is "+per+"%.");
    }
    
    public float getPercentage(int a1, int a2, int a3) {  
        return 0;
    }
}