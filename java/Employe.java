public class Employe {
    String name;
    int roll_no;
    int mark1,mark2,mark3;
    float per;
    public float per (String nam,int roll_n,int m1 ,int m2, int m3) {
        name=nam;
        roll_no=roll_n;
        mark1=m1;
        mark2=m2;
        mark3=m3;
        per=(mark1+mark2+mark3)/3;
        return per;
    }
    public void display(){
        System.out.println("the name of the student with high mark is "+ name );
        System.out.println("the roll no is "+roll_no);
        System.out.println("the percentege is "+per+"%");
    }

}
