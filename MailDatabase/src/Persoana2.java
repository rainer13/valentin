
public class Persoana2 extends Persoana {

	public Persoana2() {
		super();
		// TODO Auto-generated constructor stub
	}

	@Override
	public void run() {
		Mesaj m = new Mesaj("bbb");
		m.reciver.add(p5);
		Server.recieve(m);
		
	
	}

}
