package testThreadSleep;

public class Main {
	
public static void main(String args[]){
	t1 t1Obj= new t1();
	t2 t2Obj= new t2();
	
	t2Obj.t=t1Obj;
	
	new Thread(t1Obj).start();
	new Thread(t2Obj).start();

}
	
}
