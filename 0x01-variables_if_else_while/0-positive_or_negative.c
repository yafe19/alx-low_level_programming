#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description - print if random number is positive,zero or negative 
 * Return: Always 0 (seccess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if else (n == 0)
		printf("%d is xero\n", n);
	else 
		printf("%d is positive\n", n);
	return (0);
}