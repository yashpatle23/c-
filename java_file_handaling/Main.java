class Atable{
     public void printatab() {
	
		for(int i=1; i<=15;i++) {
			System.out.println("Ascending Thread : " + i);
            try{
                Thread.sleep(300);
            }catch(Exception e){
                System.out.println(e);
            }
		}
	}
}
class Dtable{
     public void printdtab() {
		
		for(int i=15; i>0;i--) {
			System.out.println("Descending Thread : " + i);
            try{
                Thread.sleep(300);
            }catch(Exception e){
                System.out.println(e);
            }
		}
	}
}
class Ascending extends Thread {
    Atable t;
    Ascending(Atable t){
        this.t=t;
    }
	public void run(){
        t.printatab();
    }
	
}

class Descending extends Thread {
    Dtable t;
    Descending(Dtable t){
        this.t=t;
    }
    public void run(){
        t.printdtab();
    }
}

public class Main {

	public static void main(String[] args) {
		Atable t1=new Atable();
        Dtable d1=new Dtable();
		new Ascending(t1).start();
		new Descending(d1).start();
	}
}