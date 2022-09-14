#include "main.h"

/**
 *Description:a function that prints the alphabet, in lowercase, followed by a new line.
*/

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
