import java.util.ArrayList;
import java.util.Queue;

public class Mesaj {
	
	int id;
	String continut;
	Persoana sender;
	public ArrayList<Persoana> reciver = new ArrayList<Persoana>();
	public ArrayList<Topic> topics = new ArrayList<Topic>();
	
	public Mesaj(String s) {
		
		continut=s;
		
	}
	
}
