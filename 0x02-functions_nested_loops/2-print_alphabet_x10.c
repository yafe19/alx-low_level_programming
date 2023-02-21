#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet in lowercase ten times
 */

void print_alphabet_x10(void)
{
	int l_10;
	char letter;

	for (l_10 = 0; l_10 <= 9; l_10++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
