#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed
 * @n: The number of integers passed to the function
 * @...: A variable numbers to be printed
 */

void print_numbers(const char *separator, const int n, ...)
{
	va_list nums;
	unsigned int index;

	var_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
