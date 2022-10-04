#include "main.h"

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to insert
 *
 * Return: NULL if size iz zero
 * pointer to array if everyhing is normal.
 */

char *create_array(unsinged int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
