#include "main.h"
#include <stdio>

/**
 * main - print the number from 1 to 100,
 * but for multiples of three print Fizz instead of the number.
 * and for the multiple of 5 print Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	peintf('\n');

	return (0);
}
