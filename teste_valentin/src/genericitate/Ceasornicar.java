package genericitate;

public class Ceasornicar {

	String nume;
	
	public Ceasornicar(String s) {
		nume=s;
	}
	public void regleaza(ClockType ct){
		ct.setTime(12, 0, 0);
	}
	
}
