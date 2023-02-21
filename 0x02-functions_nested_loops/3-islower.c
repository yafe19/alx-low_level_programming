#include "main.h"

/**
 * _is lower - checks for a character is lowercase or not.
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
