#include <stdio.h>

/**
 * main - entry point
 * Description: A program that prints
 * the lowercase alphabet in reverse
 * Return: returns 0
*/

int main(void)
{
	char reverseAlpha;

	for (reverseAlpha = 'z'; reverseAlpha >= 'a'; reverseAlpha--)
	{
		putchar(reverseAlpha);
	}
	putchar('\n');

	return (0);
}
