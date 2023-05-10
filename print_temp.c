#include "main.h"

/**
 * print_temp - Prints out the character at index in array 'temp'.
 * @temp: Array of characters
 * @index: Index of the character to be printed
 *
 * Return: Number of characters printed with the function i.e 'string_length'
 */

int print_temp(char temp[], int *index)
{
	int string_length = 0;

	if (*index > 0)
	{
		string_length = write(1, temp, *index);
	}
	write(1, (char *)'\0', *index + 1);
	*index = 0;
	return (string_length);
}
