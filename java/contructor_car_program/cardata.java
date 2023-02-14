package contructor_car_program;
public class cardata {
    public static void main(String args[]){
        car c1=new car();
        car c2=new car(300,2008,"tata neno");
        c1.display();
        c2.display();
    }
}
