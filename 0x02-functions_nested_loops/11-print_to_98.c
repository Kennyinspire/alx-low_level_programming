#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 * with each digit seperated by comma and space
 * @n: input
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
