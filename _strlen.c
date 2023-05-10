#include "main.h"

/**
 * string_length - Prints out the length of a string
 * @s: A string
 *
 * Return: length of string 's'
 */

int string_length(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
