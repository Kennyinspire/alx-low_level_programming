#include "variadic_functions.h"

/**
 * sum_them_all - ...
 * @n: parameter to sum
 *
 * Return: Always return (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);

			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
