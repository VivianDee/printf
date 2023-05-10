#include "main.h"

/**
  * valid_specifier - Checks for valid specifiers
  * @spc: conversion specifier character
  *
  * Return:
  * - 0 (invalid specifier)
  * - 1 (valid specifier)
  */

int valid_specifier(char spc)
{
	int i;
	char *specifiers = "scdi%xuoXbSprR";

	for (i = 0; i < 14; i++)
	{
		if (spc == specifiers[i])
			return (1);
	}
	return (0);
}


/**
 * check_specifier - Checks for valid specifiers and flags
 * @format: format string from the printf function
 * @flags: A pointer to struct flags
 *
 * Return:
 * - 0 (invalid specifier)
 * - 1 (valid specifier)
 */

int check_specifier(char **format, fm *flags)
{
	while (**format)
	{
		if (valid_specifier(**format))
			return (1);
		else if (**format >= ' ' && **format <= '9')
		{
			if (**format == '+')
			{
				flags->plus = 'T';
			}
			else if (**format == ' ' || **format == '0')
			{
				if (**format == ' ')
				{
				(*format)++;
				flags->space = 'T';
				} else
				{
					(*format)++;
				flags->zero = 'T';
				}
				while (**format >= 48 && **format <= 57)
				{
					if (flags->space_num == 0)
						flags->space_num = ((**format) % 48);
					else
						flags->space_num = flags->space_num * 10 + ((**format) % 48);
					(*format)++;
				}
				(*format)--;
			}
			else if (**format == '#')
				flags->pound = 'T';
			else if (**format >= '1' && **format <= '9')
				flags->width = **format;
			else
				return (0);
		}
		else
			return (0);
		(*format)++;
	}
	return (0);
}
