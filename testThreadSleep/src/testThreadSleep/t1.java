package testThreadSleep;

public class t1 implements Runnable {

	@Override
	public void run() {
		try{
			this.wait(50000);
		}
		catch(InterruptedException e1){
			System.out.println(e1.getMessage()+" "+e1.getCause()+" ");
			e1.printStackTrace();
		}
		catch (Exception e) {
			e.printStackTrace();
		}
		System.out.println("ajuns1");

	}
	
	public void print(){
		System.out.println("ajuns");
	}

}


// https://stackoverflow.com/questions/1036754/difference-between-wait-and-sleep
// https://docs.oracle.com/javase/tutorial/essential/concurrency/sleep.html
// https://www.google.ro/search?q=java+difference+between+sleep+and+wait&oq=java+difference+between+sleep+and+wait&aqs=chrome..69i57j0l5.9103j0j7&sourceid=chrome&ie=UTF-8
