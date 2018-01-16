package genericitate;

public class Utilities {
	
	public static Pair doSet(Pair p){
		Ceasornicar om=(Ceasornicar) p.getFirst();
		ClockType aparat=(ClockType) p.getSecond();
		om.regleaza(aparat);
		return p;
		
	}
	
	public static void createSetAndDisplay(Clock aparat){
		Ceasornicar om=new Ceasornicar("a");
		Pair p=new Pair(om, aparat);
		Pair res=doSet(p);
		ClockType c=(ClockType)res.getSecond();
		System.out.println(c);
	}
	
	public static void iWouldLikeToKnowAtCompileTime(){
		Pair p1 = new Pair(new Integer(5),new Integer(6));
		doSet(p1);
		Pair p2 = new Pair(new Ceasornicar("B"),new Clock());
		doSet(p2);
		Pair p3;
		p3 = p2;
		doSet(p3);
		p3=p1;
		doSet(p1);
	}

}
