import java.util.ArrayList;
import java.util.Queue;

public class Mesaj {
	
	static int count;
	int id;
	String continut;
	Persoana sender;
	public ArrayList<Persoana> reciver = new ArrayList<Persoana>();
	public ArrayList<Topic> topics = new ArrayList<Topic>();
	
	public  Mesaj(String s) {
		
		synchronized(Mesaj.class) {
			++count;
			id=count;
		}
		continut=s;
		
	}
	
}
