#include "main.h"

/**
 * _strcpy - copy and pase string
 * @dst:  destination
 * @src:  source
 *
 * Return: destination
 */

char *_strcpy(char *dst, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dst + inc) = *(src + inc);
		inc++;
	}
	*(dst + inc) = '\0';

	return (dst);
}
