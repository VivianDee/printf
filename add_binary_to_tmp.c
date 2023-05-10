#include "main.h"


/**
 * binary_to_tmp - gets the binary for a decimal number
 * @temp: An array
 * @index: index in array 'temp'
 * @num: A Number
 */

void binary_to_tmp(char temp[], int *index, unsigned int num)
{
	if (index != NULL)
	{
		if (num >= 2)
		{
			binary_to_tmp(temp, index, num / 2);
		}
		char_to_temp(temp, index, '0' + num % 2);
	}

}
