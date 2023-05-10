#include "main.h"

int string_length(char *s);

/**
 * str_to_temp - Adds each character in string 'str' to 'index'
 *in array 'temp'
 * @temp: An array
 * @index: index in array 'temp'
 * @str: A string
 */

void str_to_temp(char temp[], int *index, char *str)
{
	if (str == NULL)
		str = "(null)";
	if (index != NULL)
	{
		while (*str)
		{
			char_to_temp(temp, index, *str);
			str++;
		}
	}
}


/**
  * non_printable_strings_to_temp - Adds a string, including
  *non-printable characters (npc) to array 'temp'
  * @temp: An array
  * @index: Index in temp
  * @str: A string
  */

void non_printable_strings_to_temp(char temp[], int *index, char *str)
{
	fm flaag;

	initialize_all_flags(&flaag);

	if (index != NULL)
	{
		while (*str)
		{
			if (*str < 32 || *str >= 127)
			{
				char_to_temp(temp, index, '\\');
				char_to_temp(temp, index, 'x');
				if (*str < 16)
				{
					char_to_temp(temp, index, '0');
					hexa_to_temp_upper(temp, index, *str, flaag);
				}
				else
					hexa_to_temp_upper(temp, index, *str, flaag);
			}
			else
			{
				char_to_temp(temp, index, *str);
			}
			str++;
		}
	}
}


/**
 *rev_str_to_temp - Reverses a string and adds each character to
 *array 'temp'
 * @temp: An array
 * @index: Index in temp
 * @str: A string
 */

void rev_str_to_temp(char temp[], int *index, char *str)
{
	int i = 0;

	if (str == NULL)
		str = ")llun(";
	if (index != NULL)
	{
		for (i = (string_length(str) - 1); i >= 0; i--)
		{
			char_to_temp(temp, index, *(str + i));
		}
	}
}

/**
 * rot13_str_to_temp - Encrypts a string using rot13 cipher
 * @temp: An array
 * @index: Index in temp
 * @str: A string
 */


void rot13_str_to_temp(char temp[], int *index, char *str)
{
	int i = 0;
	char *encrypt = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c;

	if (str == NULL)
		str = "(ahyy)";
	if (index != NULL)
	{
		for (i = 0; i < string_length(str); i++)
		{
			c = str[i];
			if (c >= 'A' && c <= 'Z')
				c = encrypt[(c - 'A' + 13) % 26];
			else if (c >= 'a' && c <= 'z')
				c = encrypt[(c - 'a' + 13) % 26 + 26];
			char_to_temp(temp, index, c);
		}
	}
}
