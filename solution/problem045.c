/*
 * Triangle, pentagonal, and hexagonal numbers are generated by the following formulae:
 * Triangle      Tn = n(n+1)/2     1, 3, 6, 10, 15, ...
 * Pentagonal    Pn = n(3n−1)/2    1, 5, 12, 22, 35, ...
 * Hexagonal     Hn = n(2n−1)      1, 6, 15, 28, 45, ...
 * It can be verified that T285 = P165 = H143 = 40755. 
 * Find the next triangle number that is also pentagonal and hexagonal.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	long int a, b, c, x, y, z;

	for (x = 286; ; x++)
	{
		a = x * (x + 1) / 2;
		for (y = 166; y <= x; y++)
		{
			b = y * (3 * y - 1) / 2;
			if (a == b)
			{
				for (z = 144; z <= y; z++)
				{
					c = z * (2 * z - 1);
					if (b == c)
					{
						printf("Answer: %ld\n", a);
						goto end;
					}
				}
			}
		}
	}

end:

	return 0;
}
