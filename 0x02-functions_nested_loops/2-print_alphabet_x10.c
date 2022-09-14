#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
*/

void print_alphabet_x10(void)
{
	int i = 0, alpha;

	while (i < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');

		i++;
	}
}
