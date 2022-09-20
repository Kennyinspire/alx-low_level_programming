#include "main.h"

/**
 * rev_string - A program that reverse a string
 * @s: parameter
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i = 0, j;
	char c, d;

	while (s[i] != '\0')
	{
		i++
	}

	i--;

	for (j = 0; j < i; j++)
	{
		c = s[j];
		d = s[i];
		s[j] = d;
		s[i] = c;
		i--;
	}
}
