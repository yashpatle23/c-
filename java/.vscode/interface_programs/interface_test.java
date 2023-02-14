public class interface_test{
    public static void main(String args[]){
        ba c1=new ba();
        c1.b();
    }
}
interface a{
    void b();
}
class ba implements a{
    public void b() {
    System.out.println("teh reme");
    }
    
}