#include "main.h"

/**
 * add_char - Adds a char as padding to 'num'
 * @temp: an array
 * @index: Index in array 'temp'
 * @num: A number
 * @flags: A pointer to struct flags
 * @c: Char used for padding
 */

void add_char(char temp[], int *index, int num, fm flags, char c)
{
	int i, num_length = 1, temp_num = num / 10;

	while (temp_num % 10)
	{
		temp_num /= 10;
		num_length += 1;
	}
	if (flags.space_num == 0)
		char_to_temp(temp, index, c);
	for (i = num_length; i < flags.space_num; i++)
	{
		char_to_temp(temp, index, c);
	}
}
