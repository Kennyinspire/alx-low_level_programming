#include "main.h"
#include "stdio.h"

/**
 * _strlen - return the lenght of a string
 * @s: string
 * Return: returns lenght as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
