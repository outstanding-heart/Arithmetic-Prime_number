/* 
 * Author: Lee.HJ
 * Create time: 11/8/2014	23:58
 * Instruction: A way to solve the problem that print the prime number between 0 to 100
 */

#include <stdio.h>
#define MAX 100

int main()
{
	int i, j, count;
	
	for(i=2; i<MAX; i++)
	{
		count = 0;
		for(j=2; j<=(i/2); j++)
		{
			if(count == 1) break;
			else
			{
				if(i%j == 0) count = 1;
			}
		}
		if(count == 0) printf("%d ", i);
	}
	printf("\n");

	return 0;
}
