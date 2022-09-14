#include "main.h"
#include "unistd.h"

/**
 * main- entry point
 * Description: A program that prints _putchar
 * Return: return 0 as success
*/

#include "main.h"

int main(void)
{
	char str[] = "_putchar";

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
