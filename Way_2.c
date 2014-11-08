/*
 * Author: Lee.HJ
 * Create time; 11/9/2014 00:19
 * Instruction: A way from www.zhihu.com to solve the problem that print the prime number between 0 to 100
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100

int main()
{
	unsigned long long int i,j;
	int *primes;

	primes = malloc(sizeof(int)*LIMIT);
	for (i=2;i<LIMIT;i++)
		primes[i]=1;

	for (i=2;i<LIMIT;i++)
		if (primes[i])
			for (j=i;i*j<LIMIT;j++)
				primes[i*j]=0;

	for (i=2;i<LIMIT;i++)
		if (primes[i])
			printf("%llu ",i);

	printf("\n");
	free(primes);
    return 0;
}
