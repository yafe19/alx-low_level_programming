#include <stdio.h>
/**
 * main - Entry point
 * Description: print lower case alphabets.
 * Return: Always 0 (success)
 */
int main(void)
{
	int A = 98;

	while (A <= 122)
	{
		if (A == 101 || A == 113)
		{
			A++;
			continue;
		}
		putchar(A);
	}
	putchar('\n');
	return (0);
}
