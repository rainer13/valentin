
public class Persoana2 extends Persoana {

	public Persoana2() {
		super();
		// TODO Auto-generated constructor stub
	}

	@Override
	public void run() {
		Mesaj m2 = new Mesaj("bbb");
		m2.reciver.add(p5);
		m2.reciver.add(p1);
		this.sendMessage(m2);
		this.registerTopic(Topic.sport);
		this.informTopic(2);
		Server.requestedMessage(4, this);
		try {
			this.wait(10000);
			}
			catch(Exception e) {
				e.printStackTrace();
			
		}
		
		m2.reciver.add(p4);
		
	}

}
