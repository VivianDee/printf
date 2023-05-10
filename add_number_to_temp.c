#include "main.h"

/**
 * number_to_temp - Recursively adds each number 'num' to
 *index in array 'temp', starting from the last digit
 * @temp: An array
 * @index: index in array 'temp'
 * @num: A Number
 * @flags: A pointer to struct flags
 * @check: A number used to keep track of the recursively called function
 */

void number_to_temp(char temp[], int *index, int num, fm flags, int check)
{
	if (index != NULL)
	{
		if (flags.space == 'T' && check == 0)
		{
			add_char(temp, index, num, flags, ' ');
			check = 1;
		}
		if (flags.zero == 'T' && check == 0)
		{
			add_char(temp, index, num, flags, '0');
			check = 1;
		}
		if (flags.plus == 'T' && check == 0)
		{
			if (num >= 1)
			{
				char_to_temp(temp, index, '+');
			}
			check = 1;
		}
		if (num < 0)
		{
			char_to_temp(temp, index, '-');
			num = -num;
		}
		if (num == INT_MIN || num == INT_MAX)
		{
			str_to_temp(temp, index, "214748364");
			if (num == INT_MIN)
				num = 8;
			else
				num = 7;
		}
		else if (num >= 10)
			number_to_temp(temp, index, num / 10, flags, 1);
		char_to_temp(temp, index, '0' + num % 10);
	}
}

/**
 * unsigned_num_to_temp - Recursively adds each unsigned number 'num' to
 *index in array 'temp', starting from the last digit
 * @temp: An array
 * @index: index in array 'temp'
 * @num: A number
 */

void unsigned_num_to_temp(char temp[], int *index, unsigned int num, fm flags)
{
	if (flags.space == 'T')
	{
		flags.space = 'F';
	}
	if (index != NULL && num >= 0)
		number_to_temp(temp, index, num, flags, 0);
}
