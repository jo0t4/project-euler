/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int result = 0, multipleThree, multipleFive;

	for (multipleThree = 0; multipleThree * 3 < 1000; multipleThree++) 
	{
		if (multipleThree % 5 != 0)
			result += multipleThree * 3;
	}

	for (multipleFive = 0; multipleFive * 5 < 1000; multipleFive++) 
	{
		result += multipleFive * 5;
	}

	printf("Answer: %d\n", result);

	return 0;
}
