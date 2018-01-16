import static org.junit.Assert.*;

import org.junit.Test;

public class VVSDateTest{

	@Test(expected = ArrayIndexOutOfBoundsException.class)
	public void test() {
		VVSDate vs= new VVSDate(3, 0, 17);
		VVSDate vs2= new VVSDate(2, 12, 2017);
		vs2.getDays(vs);
	}
	
	
	
	@Test
	public void test2() {
		VVSDate vs= new VVSDate(0, 1, 0);
		VVSDate vs2= new VVSDate(1, 1, 0);
		assertEquals(vs.getDays(vs2), -1);
	}
	
	
	@Test
	public void test3() {
		VVSDate vs= new VVSDate(2, 12, 2017);
		VVSDate vs2= new VVSDate(1, 12, 2017);
		assertEquals(vs.getDays(vs2), 1);
	}
	
	
	@Test
	public void test4() {
		VVSDate vs= new VVSDate(1, 12, 2017);
		VVSDate vs2= new VVSDate(1, 12, 2017);
		assertEquals(vs.getDays(vs2), 0);
	}
	
	
	
	@Test
	public void test5() {
		VVSDate vs= new VVSDate(1, 12, 2018);
		VVSDate vs2= new VVSDate(1, 12, 2017);
		assertEquals(vs.getDays(vs2), 365);
	}
	
	
	
	@Test
	public void test6() {
		VVSDate vs= new VVSDate(1, 12, 2020);
		VVSDate vs2= new VVSDate(1, 12, 2019);
		assertEquals(vs.getDays(vs2), 366);
	}
	
	
	
}
