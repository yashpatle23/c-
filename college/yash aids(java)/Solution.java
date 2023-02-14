
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
/*
 * Create the Student and Priorities classes here.
 */
class Student{
        int id;
        String name;
        double cgpa;
        public Student(int id,String name, double cgpa){
                name =this.name;
                id =this.id;
                cgpa=this.cgpa;
        }
        public int getID(){
                return id;
        }
        public String getName(){
                return name;
        }
        public double getCGPA(){
                return cgpa;
        }
}
class Priorities{
        public List<Student> getStudents(List<String> events){
                List<Student> stu=new ArrayList<>();
                
                int i=0;
                 while(i< events.size()){
                         String it=events.get(i);
                        if(it.equals("SERVED"));
                        else {
                                String[] words = it.split(" ");
                                int id=Integer.parseInt(words[3]); 
                                double c=Double.parseDouble(words[2]); 
                        
                                stu.add(new Student(id, words[1], c));
                                
                        }
                 }
                return stu;
        }
}

public class Solution {
    private final static Scanner scan = new Scanner(System.in);
    private final static Priorities priorities = new Priorities();
    
    public static void main(String[] args) {
        int totalEvents = Integer.parseInt(scan.nextLine());    
        List<String> events = new ArrayList<>();
        
        while (totalEvents-- != 0) {
            String event = scan.nextLine();
            events.add(event);
        }
        
        List<Student> students = priorities.getStudents(events);
        
        if (students.isEmpty()) {
            System.out.println("EMPTY");
        } else {
            for (Student st: students) {
                System.out.println(st.getName());
            }
        }
    }
}