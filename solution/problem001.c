/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int result = 0, multiple_3, multiple_5;

	for (multiple_3 = 0; multiple_3 * 3 < 1000; multiple_3++) {
		if (multiple_3 % 5 != 0)
			result += multiple_3 * 3;
	}

	for (multiple_5 = 0; multiple_5 * 5 < 1000; multiple_5++) {
		result += multiple_5 * 5;
	}

	printf("ANSWER = %d\n", result);

	return 0;
}
