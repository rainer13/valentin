package testThreadSleep;

public class t2 implements Runnable {

	t1 t;
	
	@Override
	public void run() {
		try{
			this.wait(5000);
		}
		catch (Exception e) {
			e.printStackTrace();
		}
		
		t.print();

	}

}
