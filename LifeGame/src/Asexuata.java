
public class Asexuata extends Celula {

	
	
	public Asexuata(int te, int ts) {
		// TODO Auto-generated constructor stub
		super(te,ts);
	}

	@Override
	public void multiply() {
		Asexuata a1=new Asexuata(timeToEat, timeToDie);
		Asexuata a2=new Asexuata(timeToEat, timeToDie);
		Thread t2=new Thread(a2);
		Thread t1=new Thread(a1);
		t1.start();
		t2.start();
		this.die();
	}

}
