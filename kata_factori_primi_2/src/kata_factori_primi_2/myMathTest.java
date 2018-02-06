package kata_factori_primi_2;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class myMathTest  {

	@Test(expected = exception.class)
	void test() {
		myMath m = new myMath();
		m.decompose(0);
	}

}
