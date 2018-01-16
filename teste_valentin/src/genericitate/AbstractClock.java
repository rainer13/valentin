package genericitate;

public class AbstractClock implements ClockType{
	
int h, m, s;
	
	@Override
	public void setTime(int h, int m, int s) {
		this.h=h;
		this.m=m;
		this.s=s;
		
	}
	
	public String toString(){
		return "Este ora "+h+":"+m+":"+s;
	}
	public AbstractClock() {
		
	}
	
}
