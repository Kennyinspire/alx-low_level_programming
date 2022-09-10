#include <stdio.h>

/**
 * main - entry point
 * Description: A program that prints in lowercase and in uppercase
 * Return: returns 0
*/

int main(void)
{
	char alphaLower = 'a';
	char alphaUpper = 'A';

	/*print in lowercase */
	while (alphaLower <= 'z')
	{
		putchar(alphaLower);
		alphaLower++;
	}

	/* print uppercase */
	while (alphaUpper <= 'Z')
	{
		putchar(alphaUpper);
		alphaUpper++;
	}
	putchar('\n');
	return (0);
}
