#include <stdio.h>
/**
 * main - Entry point
 * Description: print lower case alphabets.
 * Return: Always 0 (success)
 */
int main(void)
{
	int A = 122;

	while (A >= 97)
	{
		putchar(A);
		A--;
	}
	putchar('\n');
	return (0);
}
