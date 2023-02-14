package contructor_car_program;
public class car {
    int cc;
    int year;
    String name;
    public car(){
        cc=400;
        year=2005;
        name="mahendra suv";
    }
    public car(int c,int ye, String na){
        cc=c;
        year=ye;
        name=na;
    }
    public void display(){
        System.out.println("the name of car is "+name);
        System.out.println("the cc of car is "+cc);
        System.out.println("the year id was publicshed"+year);
    }
}