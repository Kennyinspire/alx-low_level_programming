#include "main.h"

/**
 * _isdigit - This checks if a character is a digit or not
 * @c: check character
 * Return: 1 if it is digit or 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
