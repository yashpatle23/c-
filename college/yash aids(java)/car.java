public class car {
    public static void main(String args[]){
        cardata c1=new cardata();
        cardata c2=new cardata(200,2020,"tata nexon");
        c1.display();
        c2.display();
    }
}
class cardata{
    int cc;
    int year;
    String name;
    public cardata(){
        cc=400;
        year=2005;
        name="mahendra suv";
    }
    public cardata(int cc,int year,String name){
        this.cc=cc;
        this.year=year;
        this.name=name;
    }
    public void display(){
        System.out.println("the name of car is "+name+"\nthe cc of car is "+cc+"\nthe year car published is "+year);
    }
}