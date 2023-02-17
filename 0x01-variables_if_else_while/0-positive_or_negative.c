#include <stdlib.h>
#include <time.g>
#include <stdio.h>
/**
 * main - Determining if the number is positive,negative or zero.
 * description: get a random number and print number
 * return 0
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
