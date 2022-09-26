#include "main.h"

/**
 * _memcpy - A function that copies a memory area
 * @dest: memory area to be copied
 * @src: memory area to be copied from
 * @n: number of byte to be copied
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
