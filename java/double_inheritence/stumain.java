package double_inheritence;

public class stumain {
    public static void main(String args[]){
    result r1=new result();
    r1.student_detail(65,"Raj");
    r1.markdetail(89,99,0);
    r1.display();
    }


}
class student{
    int roll_no;
    String name;
    void student_detail(int roll_no,String name){
        this.roll_no=roll_no;
        this.name=name;
    }
}
class test extends student{
    int m1,m2,sport_mark;
    void markdetail(int m1,int m2,int sport_mark){
        this.m1=m1;
        this.m2=m2;
        this.sport_mark=sport_mark;
    }

}
class result extends test{
    int total;
    float percentage;
    void calculate(){
        total=m1+m2+sport_mark;
        percentage=total/2F;
    }
    void display(){
        calculate();
        System.out.println("Name="+name+"\nRoll No="+roll_no+"\nPercentage="+percentage+"%");
    }
}