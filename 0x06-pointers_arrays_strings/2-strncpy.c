#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copy a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination string
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '0'; i++)
	{
	dest[i] = src[i];
	}

	for (; i < n; i++)
	{
	dest[i] = '0';
	}

	return (dest);
}