import java.util.*;  
public class practical_6{  
public static void main(String args[]){  
        HashMap<Integer, List> map=new HashMap<Integer,List>();
        ArrayList<Integer> list1=new ArrayList<Integer>();
        ArrayList<Integer> list2=new ArrayList<Integer>();
        ArrayList<Integer> list3=new ArrayList<Integer>();
        Integer[] roll1 = {23, 93, 56, 92, 39};
        Integer[] roll2 = {45, 99, 87, 92, 100};
        Integer[] roll3 = {97, 88, 78, 95, 87};
        Collections.addAll(list1, roll1);   
        Collections.addAll(list2, roll2);
        Collections.addAll(list3, roll3);
        map.put(19,list1);
        map.put(20,list2);
        map.put(21,list3);
        ArrayList<Integer> total_mark=new ArrayList<Integer>();
        int total_marks_roll1=total_marks(roll1);
        total_mark.add(total_marks_roll1);
        int total_marks_roll2=total_marks(roll2);
        total_mark.add(total_marks_roll2);
        int total_marks_roll3=total_marks(roll3);
        total_mark.add(total_marks_roll3);

        System.out.println("Roll no. and Marks of students ");  
        System.out.println(map);
        System.out.println("List of total marks");
        System.out.println(total_mark);

} 
    public static int total_marks(Integer mark[]){
        int total=0;
        for(int i=0;i<5;i++){
            total=total+mark[i];
        }
        return total;
    }
}  