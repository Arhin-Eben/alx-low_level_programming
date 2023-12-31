#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

 /* Compute the length of the string */
	while (s[len] != '\0')
	len++;

 /* Swap characters from start and end of the string */
	for (i = 0; i < len / 2; i++)
	{
	tmp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = tmp;
	}
}
