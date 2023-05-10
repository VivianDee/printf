#include "main.h"

/**
 * char_to_temp - Adds character 'c' to 'index' in array 'tenp'
 * @temp: An array
 * @index: Index in in  array 'temp'
 * @c: A character
 */

void char_to_temp(char temp[], int *index, char c)
{
	if (index != NULL)
	{
		if (c)
		{
			temp[*index] = c;
			 (*index)++;
			if (*index == BUFFER_SIZE)
				print_temp(temp, index);
		}
	}
}
