package single_inheritence;

public class empymain {
    public static void main(String args[]){
        manager m1=new manager();
        m1.get(12,"arnav",50000,5000,"A+ employee");
        m1.display();
    }
}

class employee{
    String name;
    int id;
    long salary;
}
class manager extends employee{
    long bonus;
    String desigination;
    void get(int id,String name,long salary,long bonus,String desigination){
        this.id=id;
        this.name=name;
        this.salary=salary;
        this.bonus=bonus;
        this.desigination=desigination;
    }
    void display(){
        long totsalary=salary+bonus;
        System.out.print("the name of employee is "+name+"\nThe salary of employee is "+totsalary+"\nThe designation of employee is "+desigination);
    }
}