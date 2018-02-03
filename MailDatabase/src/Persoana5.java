
public class Persoana5 extends Persoana {

	public Persoana5() {
		super();
		
	}

	@Override
	public void run() {
		Mesaj m5= new Mesaj("eeee");
		m5.reciver.add(p3);
		m5.reciver.add(p2);
		sendMessage(m5);
		Mesaj m2 = new Mesaj("test");
		sendMessage(m2);
		
	}

}
