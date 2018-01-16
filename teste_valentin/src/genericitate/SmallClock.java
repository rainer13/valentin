package genericitate;

public class SmallClock implements ClockType{
	
	int time;

	@Override
	public void setTime(int h, int m, int s) {
		time=h*60+m;
		
	}
	
	public String toString(){
		return ""+time;
	}
	
	

}
