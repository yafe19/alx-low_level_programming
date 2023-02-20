#include <stdio.h>
/**
 * main - Entry point
 * Description: print all the number of base16.
 * Return: Always 0 (success)
 */
int main(void)
{
	int A;
	int n;

	for (A = 48; A <= 57; A++)
	{
		putchar(A);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
