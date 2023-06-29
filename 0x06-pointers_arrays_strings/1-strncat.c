#include "main.h"
#include <stdlib.h>
/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be used from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

    /*Find the length of dest string*/
	while (dest[dest_len] != '0')
	dest_len++;

    /* Append src to dest*/
	for (i = 0; i < n && src[i] != '0'; i++)
	dest[dest_len++] = src[i];

	dest[dest_len] = '0';

	return (dest);
}
