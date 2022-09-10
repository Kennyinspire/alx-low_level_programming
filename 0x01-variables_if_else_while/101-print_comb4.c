#include <stdio.h>

/**
 * main- entry point
 * Description: A program that prints all possible
 * different combinations of three digits
 * Return: returns 0
*/

int main(void)
{
	int a = 0, b, c;

	while (a <= 9)
	{
		b = a + 1;

		while (b <= 9)
		{
			c = b + 1;

			while (c <= 9)
			{
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);

				if (a + b + c != 24)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);

}
