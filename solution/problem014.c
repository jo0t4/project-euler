/*
 * The following iterative sequence is defined for the set of positive integers:
 *		n → n/2 (n is even)
 *		n → 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 *			13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been
 * proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 * Which starting number, under one million, produces the longest chain?
 * NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, longestChainNumber, terms = 1, highestTerm = 0;
	long int number;
						
	for (x = 13; x <= 1000000; x++) 
	{
		number = x;
			while(number != 1) 
			{
				if(number % 2 == 0)
				{
					number = number / 2;
					terms++;
				} 
				else 
				{
					number = number * 3 + 1;
					terms++;
				}
			} 
		if (terms > highestTerm) 
		{
			highestTerm = terms;
			longestChainNumber = x;
		} 
						          
		terms = 1;
	}

	printf("Answer: %d\n", longestChainNumber);

	return 0;
}
