#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_number - Prints an integer
 * @n: The integer to print
 * Return: Nothing!
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
	_putchar('-');
	i = -n;
	}
	else
	{
	i = n;
	}
	if (i / 10)
	{
	print_number(i / 10);
	}

	_putchar(i % 10 + '0');
/*	return;*/
}

