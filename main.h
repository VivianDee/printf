#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <limits.h>

#define BUFFER_SIZE 1024

/**
 * format_signs - A structure that holds data showing whether a flag is added.
 *to the format specifier
 */

typedef struct format_signs
{
	char dash;
	char plus;
	char space;
	int space_num;
	char pound;
	char zero;
	int width;
	int precision;
	char flag_temp[BUFFER_SIZE];
} fm;

int print_temp(char temp[], int *index);
void char_to_temp(char temp[], int *index, char c);
void str_to_temp(char temp[], int *index, char *str);
void number_to_temp(char temp[], int *index, int num, fm flags, int check);
void add_char(char temp[], int *index, int num, fm flags, char c);
int check_specifier(char **format, fm *flags);
int valid_specifier(char spc);
void binary_to_tmp(char temp[], int *index, unsigned int num);
void non_printable_strings_to_temp(char temp[], int *index, char *str);
void pointer_to_temp(char temp[], int *index, void *address, fm flags);
void octal_to_temp(char temp[], int *index, unsigned int num, fm flags);
void hexa_to_temp_upper(char temp[], int *index, unsigned int num, fm flags);
void hexadecimal_to_temp(char temp[], int *index, unsigned int num, fm flags);
void unsigned_num_to_temp(char temp[], int *index, unsigned int num, fm flags);
int _printf(char *format, ...);
int determine_spc(char temp[], int *index, va_list args, char format, fm flags);
void rev_str_to_temp(char temp[], int *index, char *str);
void rot13_str_to_temp(char temp[], int *index, char *str);
void initialize_all_flags(fm *flags);


#endif
