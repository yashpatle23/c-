public class practical_3 {
    public static void main(String args[]) {
        System.out.println("work done in februwary in 4 week ");
        assistant a1=new assistant();
        a1.perform_hr(4);
        associoate a2=new associoate();
        a2.perform_hr(4);
    }
}
abstract class proffesser {
    public abstract void perform_hr(int week);
}
class assistant extends proffesser{
    public void perform_hr(int week) {
       int TL_hour=10*week;
       int Research=3*week;
       System.out.println("the assistant done TL hour "+TL_hour+" hour");
       System.out.println("THe assistant done his resarch is "+Research+" hour");
    }

}
class associoate extends proffesser{
    public void perform_hr(int week){
        int TL_hour=8*week;
        int Research=5*week;
        System.out.println("The associate done TL hour "+TL_hour+"hour");
        System.out.println("The associate  done Reseatch "+Research+" hour");
    }
}
