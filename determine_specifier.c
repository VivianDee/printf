#include "main.h"

/**
 * determine_spc - Determines which helper function to call
 * @temp: An array
 * @index: Index in 'array'
 * @args: list of arguments
 * @format: format specifier
 * @flags: pointer to struct flags
 * Return: -1 (failure) if no format specifier is found or if index is NULL
 */

int determine_spc(char temp[], int *index, va_list args, char format, fm flags)
{
	if (index != NULL)
	{
		if (format == 's')
			str_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'r')
			rev_str_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'R')
			rot13_str_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'c')
			char_to_temp(temp, index, (char)va_arg(args, int));
		else if (format == 'd' || format == 'i')
			number_to_temp(temp, index, va_arg(args, int), flags, 0);
		else if (format == '%')
			char_to_temp(temp, index, '%');
		else if (format == 'u')
			unsigned_num_to_temp(temp, index, va_arg(args, unsigned int), flags);
		else if (format == 'x')
			hexadecimal_to_temp(temp, index, va_arg(args, unsigned int), flags);
		else if (format == 'X')
			hexa_to_temp_upper(temp, index, va_arg(args, unsigned int), flags);
		else if (format == 'o')
			octal_to_temp(temp, index, va_arg(args, unsigned int), flags);
		else if (format == 'p')
			pointer_to_temp(temp, index, va_arg(args, void *), flags);
		else if (format == 'S')
			non_printable_strings_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'b')
			binary_to_tmp(temp, index, va_arg(args, unsigned int));
		else
			return (-1);
	}
	return (0);
}
