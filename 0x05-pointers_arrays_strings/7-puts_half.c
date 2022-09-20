#include "main.h"

/**
 * _strlen - get length of string
 * @s: pointer to char
 * Return: length of str
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * puts_half - prints half of a string
 * @str: a pointer to string
 * Return: nothing
*/

void puts_half(char *str)
{
	int i;
	int size = _strlen(str);

	if (size % 2 != 0)
	{
		i = (size / 2) + 1;
	}
	else
	{
		i = size / 2;
	}

	while (i < size)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
