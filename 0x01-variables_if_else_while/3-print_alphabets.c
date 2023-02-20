#include <stdio.h>
/**
 * main - Print the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int A = 97;
	int a = 65;

	while (A <= 122)
	{
		putchar(A);
		A++;
	}
	while (a <= 98)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
