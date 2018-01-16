package intialization_blocks;

public class Exp {

	//daca il mut dupa blocuri, am eroare de compilare
	//daca il mut imediat dupa constructor, tot 1 imi apare
	//daca nu-l initializez, apar cu 0
	//daca e obiect string, e cu null
	
	
	
	
	public Exp() {
		System.out.println("in constructor "+value);
		value.setC(35);
		System.out.println("in constructor "+value);
	}
	
	X value;
	
	{
		System.out.println("in block 1 "+value);
		value.setC(15);
	}
	
	{
		System.out.println("in block 2 "+value);
		value.setC(25);
	}
	
	public static void main(String[] args){
		Exp e=new Exp();
	}
	
}

