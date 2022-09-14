#include "main.h"

/**
 * print_sign - a function to print signs of a number
 * @n: argument passed into a function
  * Return: 1 if the number is greater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less than zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(0 + 43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(0 + 45);
		return (-1);
	}
	else
	{
		_putchar(0 + 48);
		return (0);
	}
}
