package problema2;

import static org.junit.Assert.*;

import java.util.Calendar;

import org.junit.BeforeClass;
import org.junit.Test;

public class PromotieTest {

	static Calendar c = Calendar.getInstance();
	static Calendar c2 = Calendar.getInstance();
	static Calendar c3 = Calendar.getInstance();
	static Calendar c4 = Calendar.getInstance();

	@BeforeClass
	public static void setUpClass() throws Exception {

		c.set(2014, 2, 15);
		c2.set(2020, 11, 30);
		c4.set(2020, 11, 30);

	}

	@Test
	public void test1() {

		Promotie p = new Promotie(c, c2, "1,4,7,5", null, "20");
		boolean b = p.isActiveHelper(c3);
		assertEquals(b, true);

	}

	@Test
	public void test2() {

		Promotie p = new Promotie(c, c2, "1,4,7,5", "10", "20");
		boolean b = p.isActiveHelper(c3);
		assertEquals(b, true);

	}

	@Test
	public void test3() {

		Promotie p = new Promotie(null, c2, "1,4,7,5", "10", "20");
		boolean b = p.isActiveHelper(c3);
		assertEquals(b, true);

	}

	@Test
	public void test4() {

		Promotie p = new Promotie(null, null, "1,4,7,5", "10", "20");
		boolean b = p.isActiveHelper(c3);
		assertEquals(b, true);

	}

	@Test
	public void test5() {

		Promotie p = new Promotie(c, c2, "1,4,7", "10", "20");
		boolean b = p.isActiveHelper(c3);
		assertEquals(b, false);

	}

	@Test
	public void test6() {

		Promotie p = new Promotie(c, null, "1,4,7,5", "10", "13");
		boolean b = p.isActiveHelper(c3);
		assertEquals(b, false);

	}

	@Test
	public void test7() {

		Promotie p = new Promotie(c4, c2, "1,4,7,5", "10", "13");
		boolean b = p.isActiveHelper(c3);
		assertEquals(b, false);

	}

	@Test
	public void test8() {

		Promotie p = new Promotie(c, c2, "1,4,7,5", "10", "20");
		boolean b = p.isActive();
		assertEquals(b, true);

	}

	@Test
	public void test9() {

		Promotie p = new Promotie(c, null, "1,4,7,5", null, "20");
		boolean b = p.isActive();
		assertEquals(b, true);

	}

	@Test
	public void test10() {

		Promotie p = new Promotie(c, c4, "1,4,7,5", "20", "22");
		boolean b = p.isActive();
		assertEquals(b, false);

	}

}
