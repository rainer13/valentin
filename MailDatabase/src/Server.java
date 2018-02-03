import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;

public  class Server {
	
	static ArrayList<Mesaj> mesagerie = new ArrayList<Mesaj>();
	static ArrayList<Mesaj> topicMessages = new ArrayList<Mesaj>();
	static HashMap<Topic, HashSet<Persoana>> persoanaTopic= new HashMap<Topic, HashSet<Persoana>>();
	static int countMessages=0, maxMessages=10;
	
	public static synchronized void recieve (Mesaj m) {
		
		if(m.reciver.size()!=0) {
			++ countMessages;
			mesagerie.add(m);
			if(countMessages>maxMessages) {
				
				for(Persoana p : m.reciver) {
					p.notify();
					p.reciveMessage(m);
				}
				--countMessages;
				
			}
				
		}
		
		else {
			
			HashSet<Persoana> persoane = new HashSet<Persoana>();
			for(Topic t: m.topics)
				persoane.addAll(persoanaTopic.get(t));
			for(Persoana p : persoane) {
				p.notify();
				p.informTopic(m.id);
				}
			
		}
		
	}
	
	
	
	
	
	public static synchronized void requestedMessage(int id, Persoana p) {
		for(Mesaj m : topicMessages)
			if(id==m.id) {
				
				p.reciveMessage(m);
				return;
				
			}
		
	}
	
	
	public static synchronized void  registerTopicPersona(Persoana p, Topic t) {
		HashSet<Persoana> persoane = new HashSet<Persoana>();
		if(persoanaTopic.containsKey(t))
			persoane=persoanaTopic.get(t);
		persoane.add(p);
		persoanaTopic.put(t, persoane);
			
			
	}
	
	
	

	public static void unregisterTopicPersona(Persoana p, Topic t) {
		persoanaTopic.get(t).remove(p);
			
	}
	
	

}
