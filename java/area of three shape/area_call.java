public class area_call {
    public static void main(String args[]){
        float radius=3F;
        int l=34,b=4,side=6;
        areaof_3_shape a1=new areaof_3_shape(radius);
        areaof_3_shape a2=new areaof_3_shape(l,b);
        areaof_3_shape a3=new areaof_3_shape(side);
        System.out.println("the area of shape circle is ");
        a1.display();
        System.out.println("the area of shape rectangle is ");
        a2.display();
        System.out.println("the area of shape square is ");
        a3.display();
    }
}
