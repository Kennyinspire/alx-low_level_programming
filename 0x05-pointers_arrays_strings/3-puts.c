#include <stdio.h>
#include "main.h"

/**
 * _puts -A program that prints a string
 * @str: string to print
 *
 * Description: print a string
 * Return: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
