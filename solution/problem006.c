/*
 * The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int natural, squareSum = 0, sumSquare = 0;

	for (natural = 1; natural <= 100; natural++) 
	{
		squareSum += natural;
		sumSquare += pow(natural, 2);
	}

	printf("ANSWER = %d\n", (int)pow(squareSum, 2) - sumSquare);

	return 0;
}
