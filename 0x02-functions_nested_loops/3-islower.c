#include "main.h"

/**
 * _islower - checks for a character is lowercase or not.
 * @c: the charaicter
 * Return: 1 for lowercase character or 0 for antything else.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
