#include "main.h"

/**
  * pointer_to_temp - Adds the address of a pointer to array 'temp'
  * @temp: An array
  * @index: Index in temp
  * @address: The address of the pointer
  * @flags: pointer to struct flags
  *
 */

void pointer_to_temp(char temp[], int *index, void *address, fm flags)
{
	intptr_t the_address = (intptr_t)address;

	if (index != NULL)
	{
		if (address != NULL)
		{
			str_to_temp(temp, index, "0x");
			hexadecimal_to_temp(temp, index, the_address, flags);
		}
		else
			str_to_temp(temp, index, "(nil)");
	}
}
