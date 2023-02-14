public class areaof_3_shape {
    int l1,l2;
    float r;
    double area;
    public areaof_3_shape(float ra){
        r=ra;
        area= 3.14 * r;
    }
    public areaof_3_shape(int l,int b){
        l1=l;
        l2=b;
        area=l1*l2;
    }
    public areaof_3_shape(int l){
        l1=l;
        area=l1*l1;
    }
    public void display(){
        System.out.println("the area of shape is "+area);
    }
}