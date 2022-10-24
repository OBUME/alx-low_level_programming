#include "main.h"

/**
 * _stract - Concatenates the string pointer @src to @dest
 * @dest: A pointer to string number one
 * @src: A pointer to string number two
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
