import java.util.Calendar;
import java.util.Random;

public abstract class Celula extends Thread {

	//dupa ce am mai citit, tin sa ma contrazic
	//e mai bine sa implementezi Runnable decat sa extinzi Thread
	//desi raman la pozitia ca Thread e mai curat
	//ai un avantaj clar
	//in Java poti extinde o singura clasa, dar extinde oricat interfete
	//e deci evident ca e mai bine cu Runnable
	
	
	
	public abstract void multiply();
	int timeToEat, timeToDie, numberOfEats,id;
	static  int nr=0; //sincronizare
	static final int eatBeforeMultiply=10;
	static int cellsDied=0;
	
	public Celula(int te, int ts){
		timeToEat=te;
		timeToDie=ts;
		numberOfEats=0;
		synchronized ((Celula.class)) {
			++nr;
			id=nr;
		}
		//System.out.println("S-a nascut celula "+id);
		try{
			Main.outCStream.write("S-a nascut celula "+id+"\n");
		}
		catch (Exception e) {
			// TODO: handle exception
		}
	}
	
	public void die(){
		Random r = new Random();
		Main.addFood(1+r.nextInt(5));
		//System.out.println("Celula "+id+" a murit" );
		try{
			Main.outCStream.write("Celula "+id+" a murit\n");
		}
		catch (Exception e) {
			// TODO: handle exception
		}
		++cellsDied;
		this.destroy();
	}
	
	@Override
	public void run() {
		
		int a=2;
		Main.getFood(1, this);
		try{
			sleep(0, timeToDie);
		}
		catch (InterruptedException e) {
			++numberOfEats;
			while(true){
				try{
					sleep(0, timeToEat);
				}
				catch(InterruptedException e1){
					
				}
				Main.getFood(1, this);
				try{
					sleep(0, timeToDie);
					break;
				}
				catch (InterruptedException e2) {
					++numberOfEats;
					if(numberOfEats>=eatBeforeMultiply)
						multiply();
				}
			}
		}
		
		die();
	}
	
	
	
	

}
