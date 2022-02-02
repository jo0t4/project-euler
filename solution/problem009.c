/*
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a^2 + b^2 = c^2
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int a, b, c;

	for (c = 5; ; c++)
	{
		for (b = 4; b < c; b++)
		{
			for (a = 3; a < b; a++)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2) && a + b + c == 1000)
				{
					printf("Answer: %d\n", a * b * c);
					goto end;
				}
			}
		}
	}

	end:

	return 0;
}
