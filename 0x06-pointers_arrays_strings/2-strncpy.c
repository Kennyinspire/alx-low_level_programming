#include "main.h"

/**
 * _strncpy - A function that copy a string
 * using at most an inputted number of byte.
 * @dest: buffer storing the string
 * @src: the source string
 * @n: parameter copied
 *
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
