/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

        int number, primeNumber, counter = 0;

        for(primeNumber = 5; ; primeNumber += 2)
        {
                here:
        
                for(number = 3; number < primeNumber; number += 2)
                {
                        if(primeNumber % number == 0)
                        {
                                primeNumber += 2;
                                goto here;
                        } 
                        else if (number == primeNumber - 2)
                        {
                                counter += 1;
                                if(counter == 9999)
                                {
                                printf("Answer: %d\n", primeNumber);
                                        goto end;
                                }
                        }
                }
        }

        end:

        return 0;
}
