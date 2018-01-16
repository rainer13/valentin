package genericitate;

public class Pair {

	
	Object p1,p2;
	
	public Pair(Object x1, Object x2){
		p1=x1;
		p2=x2;
	}
	
	public void setFirst(Object x){
		p1=x;
	}
	
	public void setSecond(Object x){
		p2=x;
	}
	
	public Object getFirst(){
		return p1;
	}
	
	public Object getSecond(){
		return p2;
	}
	
	
	
}
