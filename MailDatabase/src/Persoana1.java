
public class Persoana1 extends Persoana {
	
	
	
	
	public  Persoana1(){
		super();
	}
	
	@Override
	public void run() {
		
		Mesaj m = new Mesaj("hello");
		m.reciver.add(p2);
		m.reciver.add(p3);
		m.reciver.add(p4);
		this.sendMessage(m);
		try {
		this.wait(10000);
		}
		catch(Exception e) {
			e.printStackTrace();
		
	}
		Server.registerTopicPersona(this, Topic.anunturi);
		
		try {
			this.wait(10000);
			}
			catch(Exception e) {
				e.printStackTrace();
			
		}
		
		Mesaj m2 = new Mesaj("aaa");
		m2.topics.add(Topic.bucatarie);
		this.sendMessage(m2);
		
			
		}

	}
	

