package reflection;

public class X {

	int x;
	
	public X() {
		// TODO Auto-generated constructor stub
	}
	
	public X(int a) {
		x=a;
	}
	
	public void set(X x){
		x=this;
		System.out.println("\n");
		System.out.println(x);
		System.out.println("\n");
	}
	
	public static void setx(X x){
		x.x=10;
	}
	
	public static void setx(X x, int i){
		x.x=i;
	}
	
	public String toString(){
		return ""+x;
	}
	
}
