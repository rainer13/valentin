
public class Persoana3 extends Persoana {

	public Persoana3() {
		super();
		
	}

	@Override
	public void run() {
		this.registerTopic(Topic.politica);
		Mesaj m3 = new Mesaj("ccc");
		m3.reciver.add(p2);
		m3.reciver.add(p5);
		this.sendMessage(m3);
		this.registerTopic(Topic.bucatarie);
		this.registerTopic(Topic.sport);
		this.sendMessage(m3);
		try {
			this.wait(10000);
			}
			catch(Exception e) {
				e.printStackTrace();
			
		}
		
		

	}

}
