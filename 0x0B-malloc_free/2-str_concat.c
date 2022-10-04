#include "main.h"

/**
 * str_concat - A function that concatenates two string.
 * @str1:First string
 * @str2:Second string
 *
 * Return: NULL if the function fails,
 * pointer to new string in case of success
 */

char *str_concat(char *str1, char *str2)
{
	char *concat_str;
	int index, concat_index = 0, len = 0;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 "";
	for (index = 0; str1[index] || str2[index]; index++)
		len++;
	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);
	for (index = 0; str1[index]; index++)
		concat_str[concat_index++] = str1[index];
	for (index = 0; str2[index]; index++)
		concat_str[concat_index++] = str2[index];

	return (concat_str);
}
