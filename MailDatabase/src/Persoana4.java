
public class Persoana4 extends Persoana {

	public Persoana4() {
		super();
	
	}

	@Override
	public void run() {
		Mesaj m4  = new Mesaj("dddd");
		m4.reciver.add(p1);
		m4.reciver.add(p3);
		m4.reciver.add(p5);
		this.registerTopic(Topic.sport);
		this.registerTopic(Topic.bucatarie);
		try {
			this.wait(10000);
			}
			catch(Exception e) {
				e.printStackTrace();
			
		}
		this.sendMessage(m4);
		
	}

}
