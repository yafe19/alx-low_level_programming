#include <stdio.h>
#include "main.h"

/**
 * main - print all argument it recive
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
