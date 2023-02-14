public class Area_of_shape{
    public static void main(String args[]) {
        new Area(10,12);
        new Area(7);
        new Area(7,"semi");
    }
}
class Area{
    float area;
    public Area(float r){
        area=r*r*3.14F;
        System.out.println("area of circle is "+area);
    }
    public Area(int l,int b){
        area=l*b;
        System.out.println("area of rectangle is "+area);
    }
    public Area(float r,String s){
        if(s=="semi"){
            area=r*r*1.57F;
            System.out.println("area of semi circle is "+area);
        }
    }
}