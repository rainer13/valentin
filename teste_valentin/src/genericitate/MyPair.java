package genericitate;

public class MyPair<T,K> {

	T t;
	K k;
	
	public MyPair(T t1, K k1){
		t=t1;
		k=k1;
	}
	
	public MyPair(){
		
	}
	
	public void setFirst(T x){
		t=x;
	}
	
	public void setSecond(K x){
		k=x;
	}
	
	public T getFirst(){
		return t;
	}
	
	public K getSecond(){
		return k;
	}
}
