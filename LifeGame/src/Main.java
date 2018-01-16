import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

public class Main {
	
	static int T_full, T_starve;
	
	static OutputStreamWriter outCStream;
	
	
	private static int food;
	
	public static synchronized void getFood(int ammount, Celula c){
		if(food>=ammount){
			ammount-=food;
			//System.out.println("Celula "+c.id+" a mancat");
			try{
				Main.outCStream.write("Celula "+c.id+" a mancat\n");
			}
			catch (Exception e) {
				// TODO: handle exception
			}
			c.interrupt();
		}
	}
	
	
	public static synchronized void addFood(int ammount){
		food+=ammount;
	}
	
	
	//private  static HashSet<Sexuata> multiplyList;
	private static Sexuata s;
	public static synchronized boolean assistMult(Sexuata ss){
		if(s==null){
			s=ss;
			return false;
		}
		else{
			if(s==ss)
				return false;
			else{
				s=null;
				return true;
			}
		}
	}

	
	
	
	public static void main(String args[]){
		
		try{
			FileOutputStream fileStream = new FileOutputStream("E:\\eclipse workspace\\LifeGame\\src\\log1.txt");//,true);
			outCStream = new OutputStreamWriter(fileStream);
		}
		catch (Exception e) {
			// TODO: handle exception
		}
		
		T_full=100;
		T_starve=500;
		food=10000;
		//multiplyList =  new HashSet<Sexuata>();
		s=null;
		List<Celula> startCells=new ArrayList<Celula>();
		for(int i=1;i<=50;++i)
			startCells.add(new Sexuata(T_full, T_starve));
		for(int i=1;i<=50;++i)
			startCells.add(new Asexuata(T_full, T_starve));
		for(Celula c : startCells)
			c.start();
		while(true){
			for(int i=1;i<=1000000000;++i);
			//System.out.println(Celula.nr-Celula.cellsDied);
			try{
				outCStream.write("Exista "+(Celula.nr-Celula.cellsDied)+" celule\n");
			}
			catch (Exception e) {
				// TODO: handle exception
			}
		}
	}
}
