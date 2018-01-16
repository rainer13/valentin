package genericitate;

import java.util.ArrayList;

public class MyCollection<T> {
	
	public ArrayList<T> alt;
	
	public MyCollection(){
		alt=new ArrayList<T>();
	}
	
	public void add(T t){
		alt.add(t);
	}
	
	public T get(int index){
		return alt.get(index);
	}

}
