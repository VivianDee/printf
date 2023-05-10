#include "main.h"

/**
 * _printf - A function that writes a string to stdout
 * @format: A string
 *
 * Return: length of printed string
 */

int _printf(char *format, ...)
{
	char temp[BUFFER_SIZE];
	int index = 0, len = 0, value = -1;

	fm flags;
	va_list args;

	if (format != NULL)
	{
		va_start(args, format);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				initialize_all_flags(&flags);
				if (check_specifier(&format, &flags))
					value = determine_spc(temp, &index, args, *format, flags);
				else
				{
					char_to_temp(temp, &index, '%');
					format--;
				}
			}
			else
				char_to_temp(temp, &index, *format);
			format++;
		}
		va_end(args);
		len = print_temp(temp, &index);
		return (len);
	}
	return (value);
}



/**
* initialize_all_flags - initializes all the flags in struct fm flags.
* @flags: A pointer to struct flags
* - F is FALSE
* - T is TRUE
*/
void initialize_all_flags(fm *flags)
{
	int i;

	flags->dash = 'F';
	flags->plus = 'F';
	flags->space = 'F';
	flags->space_num = 0;
	flags->pound = 'F';
	flags->zero = 'F';
	flags->width = -1;
	flags->precision = -1;
	for (i = 0; i < BUFFER_SIZE; i++)
	{
		flags->flag_temp[i] = '\0';
	}
}
