#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: input
 *
 * Return: if n > 0 - the factorial of n.
 *         if n < 0 - 1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0) /*Base condition*/

		return (1);

	else if (n < 0) /*Base condition*/

		return (-1);

	else
		return (n * factorial(n - 1)); /*Recursive call*/

}
