package genericitate;

import java.awt.List;
import java.util.ArrayList;


public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		//eroare compilare; nu pot garanta ca pun doar B
		//ArrayList<A> la=new ArrayList<B>(); 
		
		ArrayList<B> lb = new ArrayList<>();//pot face
		lb.add(new B());
		lb.add(null);
		A a=new B(2);
		
		//nu pot face. Ca el nu vede decat ca si comportament la Runtime; adica pointerul nu e un cast perfect
		//lb.add(a);
		
		MyCollection<ClockType> mct=new MyCollection<>();
		//MyCollection<ClockType> mct1=new MyCollection<Clock>();
		MyCollection<Clock> mc=new MyCollection<>();
		//MyCollection<Clock> mc1 = new MyCollection<ClockType>();
		MyCollection m= new MyCollection<Clock>();
		
		m.add(new Clock());
		mct.add(new Clock());
		//mct.add("abc");
		
		
		
		

	}

}
