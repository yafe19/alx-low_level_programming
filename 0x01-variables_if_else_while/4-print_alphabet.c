#include <stdio.h>

/**
 * main - Print the lower case alphabets.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int A = 98;

	while (A <= 122)
	{
		if (A == 101 || A == 113)
		{
			continue;
			A++;
		}
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
