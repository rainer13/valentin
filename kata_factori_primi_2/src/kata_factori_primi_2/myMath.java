package kata_factori_primi_2;

import java.util.ArrayList;

public class myMath {

	ArrayList<Integer> numbers = new ArrayList<Integer>(100);

	public ArrayList<Integer> decompose(int n) throws exception {

		if (n == 0 || n == 1)
			throw new exception("nu are divizori primi");
		else
			for (int i = 2; i <= n; i++) {
				while (n % i == 0) {

					numbers.add(i);
					n = n / i;

				}

				

			}
		return numbers;
	}
	
	
	
}