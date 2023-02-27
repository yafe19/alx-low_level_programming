#include "main.h"

/**
 * _strlen - Return the length of the string.
 * @s: pointer to the string to check.
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
