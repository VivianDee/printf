## NAME

printf - formatted output conversion

## SYNOPSIS

```c
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int string_length(char *s);
int print_temp(char temp[], int *index);
void char_to_temp(char temp[], int *index, char c);
void str_to_temp(char temp[], int *index, char *str);
void rev_str_to_temp(char temp[], int *index, char *str);
void rot13_str_to_temp(char temp[], int *index, char *str);
void number_to_temp(char temp[], int *index, int num);
void unsigned_num_to_temp(char temp[], int *index, unsigned int num);
void hexadecimal_to_temp(char temp[], int *index, unsigned int num);
void binary_to_tmp(char temp[], int *index, unsigned int num);
void hexadecimal_to_temp_upper(char temp[], int *index, unsigned int num);
void octal_to_temp(char temp[], int *index, unsigned int num);
void pointer_to_temp(char temp[], int *index, void *address);
void non_printable_strings_to_temp(char temp[], int *index, char *str);

```

## DESCRIPTION

The printf function formats and prints output to the standard output stream, stdout. It converts and prints its arguments based on the specified format. This implementation of the printf function includes several conversion functions that format the output for various types of data.

## FUNCTIONS

### `int string_length(char *s)`

The `string_length` function calculates the length of a string.

### `int print_temp(char temp[], int *index)`

The `print_temp` function prints the contents of the temporary buffer `temp` to the standard output stream, stdout.

### `void char_to_temp(char temp[], int *index, char c)`

The `char_to_temp` function adds a character to the temporary buffer `temp`.

### `void str_to_temp(char temp[], int *index, char *str)`

The `str_to_temp` function adds a string to the temporary buffer `temp`.

### `void rev_str_to_temp(char temp[], int *index, char *str)`

The `rev_str_to_temp` function adds the reverse of a string to the temporary buffer `temp`.

### `void rot13_str_to_temp(char temp[], int *index, char *str)`

The `rot13_str_to_temp` function applies the ROT13 cipher to a string and adds it to the temporary buffer `temp`.

### `void number_to_temp(char temp[], int *index, int num)`

The `number_to_temp` function converts an integer to a string and adds it to the temporary buffer `temp`.

### `void unsigned_num_to_temp(char temp[], int *index, unsigned int num)`

The `unsigned_num_to_temp` function converts an unsigned integer to a string and adds it to the temporary buffer `temp`.

### `void hexadecimal_to_temp(char temp[], int *index, unsigned int num)`

The `hexadecimal_to_temp` function converts an unsigned integer to a hexadecimal string and adds it to the temporary buffer `temp`.

### `void binary_to_tmp(char temp[], int *index, unsigned int num)`

The `binary_to_tmp` function converts an unsigned integer to a binary string and adds it to the temporary buffer `temp`.

### `void hexadecimal_to_temp_upper(char temp[], int *index, unsigned int num)`

The `hexadecimal_to_temp_upper` function converts an unsigned integer to an uppercase hexadecimal string and adds it to the temporary buffer `temp`.

### `void octal_to_temp(char temp[], int *index, unsigned int num)`

The `octal_to_temp` function converts an unsigned integer to an octal string and adds it to the temporary buffer `temp`.

### `void pointer_to_temp(char temp[], int *index, void *address)`

The `pointer_to_temp` function adds the address of a pointer to the temporary buffer `temp`.

### `void non_printable_strings_to_temp(char temp[], int *index, char *str)`

The ` non_printable_strings_to_temp` function adds a stringi with non printable characters to the temporary buffer `temp`.
