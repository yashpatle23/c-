package Practical_Java;
class College
{
    int id;
    String col_name;
    String city;
    void get1(int i,String cn,String c)
    {
        id = i;
        col_name = cn;
        city = c;
    }
}
class Department extends College
{
    String dept_name;
    void get2(String dn)
    {
        dept_name = dn;
    }
    void display()
    {
        System.out.println(" COLLEGE ID: "+id);
        System.out.println(" COLLEGE NAME : "+col_name);
        System.out.println(" COLLEGE CITY: "+city);
        System.out.println(" DEPARTMENT NAME : "+dept_name+"\n\n\n\n");
    }
}
class Student extends College
{
    int roll_no;
    String name;
    void get3( int r,String n)
    {
        roll_no = r;
        name = n;
    }
    void display1()
    {
        System.out.println(" COLLEGE ID: "+id);
        System.out.println(" COLLEGE NAME : "+col_name);
        System.out.println(" COLLEGE CITY: "+city); 
        System.out.println("ROLL NUMBER : "+roll_no);
        System.out.println("STUDENT NAME: "+name+"\n\n\n");
    }
}
class Main
{
     public static void main (String[]args)
    {
       Department D1 = new Department();
       D1.get1(22,"ycce","nagpur");
       D1.get2("aids");
       D1.display();
       
       Student S1 = new Student();
       S1.get1(23,"ycce","nagpur");
       S1.get3(12,"tina");
       S1.display1();
    }
    
    
}
