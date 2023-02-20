#include <stdio.h>
/**
 * main - Entry point
 * Description: print all combination of single number.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

		while (n < 10)
		{
			putchar(48 + n);
			if (n != 9)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		return (0);
}
