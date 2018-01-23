
public class Persoana5 extends Persoana {

	public Persoana5() {
		super();
		
	}

	@Override
	public void run() {
		Mesaj m5= new Mesaj("eeee");
		m5.reciver.add(p3);
		m5.reciver.add(p2);
		m5.topics.add(Topic.bucatarie);
		m5.topics.add(Topic.anunturi);
		this.sendMessage(m5);
		this.informTopic(1);
		this.informTopic(3);
		this.informTopic(4);
		Mesaj m2 = new Mesaj("test");
		Server.recieve(m2);
		
	}

}
