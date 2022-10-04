#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newlly
 * allocated space in memory.
 * @str: String to be copied
 *
 * Return: NULL in case of error, pointer to
 * allocated space
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
	return (NULL);

	for (index = 0; str[index]; index++)
	len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';
	return (cpy);
}
