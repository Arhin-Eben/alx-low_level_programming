#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout, followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
}
