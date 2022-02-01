/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, remainder = 0;

	for (a = 2520; ; a += 10) 
	{
		for (b = 3; b <= 20; b++) 
		{
			if (a % b != 0)
				goto jump;
		}
		
		printf("ANSWER = %d\n", a);
		break;

	jump:
		remainder = 0;
	}

	return 0;
}
