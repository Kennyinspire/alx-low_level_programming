#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: argument for function
 * Return: returns the absolute value of n
*/

int _abs(int n)
{
	if (n < 0)
	{
		/* turn -ve number to +ve */
		n = (-1) * n;
	}

	return (n);
}
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
