public class nop {
    double area;
    float ra,la,ba;
    public void area(float rad){
        ra=rad;
        double area= 3.14*ra*ra;
        System.out.println("the area of circle is "+area);
    }
    public void area(float a, float b){
        la=a;
        ba=b;
        double area= la*ba;
        System.out.println("the area of rectangle is "+area);
    }

}
