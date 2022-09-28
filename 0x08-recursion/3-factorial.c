#include "main.h"

/**
 * factorial - A function that returns factorial of a given number
 * @n: parameter
 *
 * Return: the factorial of the number
 */

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
