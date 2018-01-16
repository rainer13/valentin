
public class Sexuata extends Celula {
	
	
	
	

	@Override
	public void multiply() {
		if(Main.assistMult(this)){
			Sexuata a1=new Sexuata(timeToEat, timeToDie);
			Thread t1=new Thread(a1);
			t1.start();
		}
	}

	
	public Sexuata(int te, int ts) {
		// TODO Auto-generated constructor stub
		super(te,ts);
	}
	

}
