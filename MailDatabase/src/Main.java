
public class Main {

	public static void main(String[] args) {


		Persoana1 p1=new Persoana1();
		Persoana2 p2=new Persoana2();
		Persoana3 p3=new Persoana3();
		Persoana4 p4=new Persoana4();
		Persoana5 p5=new Persoana5();
		
		
		p1.p2=p2;
		p1.p3=p3;
		p1.p4=p4;
		p1.p5=p5;
		p2.p1=p1;
		p2.p3=p3;
		p2.p4=p4;
		p2.p5=p5;
		p3.p2=p2;
		p3.p1=p1;
		p3.p4=p4;
		p3.p5=p5;
		p4.p1=p1;
		p4.p3=p3;
		p4.p2=p2;
		p4.p5=p5;
		p5.p2=p2;
		p5.p3=p3;
		p5.p4=p4;
		p5.p1=p1;
		
		Thread t1=new Thread(p1);
		Thread t2=new Thread(p2);
		Thread t3=new Thread(p3);
		Thread t4=new Thread(p4);
		Thread t5=new Thread(p5);
		
		t1.start();
		t2.start();
		t3.start();
		t4.start();
		t5.start();

	}

}
