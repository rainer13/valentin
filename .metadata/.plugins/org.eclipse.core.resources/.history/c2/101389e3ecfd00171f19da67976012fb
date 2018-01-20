import java.util.Random;
import java.util.Scanner;

public abstract class Persoana implements Runnable {
	
	public Persoana p1,p2,p3,p4,p5;
	int id;
	static Integer count=0;
	public Persoana() {
		
		synchronized (count) {
			++count;
			id=count;
		}
		
	}
	
	public void sendMessage(Mesaj m) {
		
		Server.recieve(m);
		
	}
	
	
	public synchronized void reciveMessage(Mesaj m) {
		
		System.out.println(m.continut);
		
		
	}
	
	
	public synchronized void informTopic(int id) {
		
		Random r = new Random();
		int i = r.nextInt(2);
		if(i==1)
			Server.requestedMessage(id, this);
		
	}
	
	
	public void registerTopic(Topic t) {
		
		Server.registerTopicPersona(this, t);
	}


	

}
