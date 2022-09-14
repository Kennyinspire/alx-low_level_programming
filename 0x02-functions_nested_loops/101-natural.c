#include "main.h"

/**
 * main - entry point
 * Description: computes the sum of all multiples of 3
 * or 5 below 1024
 * Return: returns 0
*/
#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
