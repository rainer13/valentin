package kata_factori_primi;

import static org.junit.Assert.*;

import java.util.ArrayList;

import org.junit.jupiter.api.Test;

class testeKata {
	

	@Test
	void test() {
		ArrayList<Integer> j = new ArrayList<Integer>();

		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(0));
		
}
	
	@Test
	void test2() {
		ArrayList<Integer> j = new ArrayList<Integer>();

		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(1));
		
}
	
	@Test
	void test3() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(2));
		
}
	
	@Test
	void test4() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(3);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(3));
		
}
	
	@Test
	void test5() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		j.add(2);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(4));
		
}
	
	@Test
	void test6() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		j.add(3);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(6));
		
}

	@Test
	void test7() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		j.add(2);
		j.add(2);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(8));
		
}

	@Test
	void test8() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		j.add(2);
		j.add(3);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(12));
		
}	

	@Test
	void test9() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		j.add(2);
		j.add(2);
		j.add(2);
		j.add(2);
		j.add(2);
		j.add(2);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(128));
		
}	
	@Test
	void test10() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		j.add(3);
		j.add(5);
		j.add(7);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(210));
		
}	
	
	@Test
	void test11() {
		ArrayList<Integer> j = new ArrayList<Integer>();
		
		j.add(2);
		j.add(2);
		j.add(3);
		j.add(5);
		j.add(7);
		myMath m = new myMath();
		
		
		assertEquals(j, m.decompose(420));
		
}	

	

	
	

}
