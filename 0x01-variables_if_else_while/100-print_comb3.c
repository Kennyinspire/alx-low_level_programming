#include <stdio.h>

/**
 * main - entry point
 * Description: A program that prints all possible
 * different combinations of two digits
 * Return: returns 0
*/

int main(void)
{
	int a = 0, b;

	while (a <= 9)
	{
		b = a + 1;

		while (b <= 9)
		{

			putchar(a + 48);
			putchar(b + 48);

			if (a == 8 && b == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	return (0);
}
