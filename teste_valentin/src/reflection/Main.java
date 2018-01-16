package reflection;

public class Main {
	
	public static void main(String args[]){
		
		X x1=new X(2);
		X x2=new X(3);
		
		System.out.println(x1);
		System.out.println(x2);
		System.out.println("\n");
		x1.set(x2);
		System.out.println(x2);
		System.out.println("\n");
		X.setx(x2);
		System.out.println(x1);
		System.out.println(x2);
		System.out.println("\n");
		X.setx(x1,20);
		System.out.println(x1);
		System.out.println(x2);
		
		Class c1=x1.getClass();
		try{

			Class c2=Class.forName("test_reflection.X");
			System.out.println(c1.equals(c2));
		}
		catch(Exception e){
			e.printStackTrace();
		}
		
	}

}
