# Custom _printf() function in C

This program implements a custom version of the printf() function in C. It includes support for the following format specifiers:
* %c - character
* %s - string
* %d - decimal (signed) integer
* %i - decimal (signed) integer
* %u - decimal (unsigned) integer
* %x - hexadecimal (lowercase) integer
* %X - hexadecimal (uppercase) integer
* %o - octal integer
* %p - pointer
* %r - reverse a string
* %R - rotate a string by 13 positions (ROT13)
* %b - binary

The function `string_length()` calculates the length of a given string.
The function `print_temp()` prints the contents of a buffer up to a specified index, and then resets the index to 0.
The function `char_to_temp()` adds a character to the buffer and prints it if the buffer is full.
The function `str_to_temp()` adds a string to the buffer by calling `char_to_temp()` for each character in the string.
The function `rev_str_to_temp()` reverses a string and adds it to the buffer by calling `char_to_temp()` for each character in the reversed string.
The function `rot13_str_to_temp()` applies ROT13 encryption to a string and adds it to the buffer by calling `char_to_temp()` for each character in the encrypted string.
The function `number_to_temp()` converts a decimal integer to a string and adds it to the buffer by calling `char_to_temp()` for each digit in the integer.
The function `unsigned_num_to_temp()` converts an unsigned decimal integer to a string and adds it to the buffer by calling `char_to_temp()` for each digit in the integer.
The function `hexadecimal_to_temp()` converts an unsigned integer to its hexadecimal (lowercase) representation and adds it to the buffer by calling `char_to_temp()` for each character in the representation.
The function `binary_to_temp()` converts an unsigned integer to its binary representation and adds it to the buffer by calling `char_to_temp()` for each character in the representation.
The function `hexadecimal_to_temp_upper()` converts an unsigned integer to its hexadecimal (uppercase) representation and adds it to the buffer by calling `char_to_temp()` for each character in the representation.
The function `octal_to_temp()` converts an unsigned integer to its octal representation and adds it to the buffer by calling `char_to_temp()` for each character in the representation.
The function `pointer_to_temp()` converts a pointer to a string and adds it to the buffer by calling `str_to_temp()` with the prefix "0x" followed by the pointer's hexadecimal representation.

## Usage

The function `_printf()` takes a format string and any number of arguments corresponding to the format specifiers in the string. It returns the number of characters printed.

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int i = 123;
    char c = 'a';
    char *s = "hello, world!";
    void *p = &i;
    unsigned int u = 123;
    unsigned int x = 0x123;
    unsigned int o = 0123;
    unsigned int b = 0b1010;

    _printf("%c %s %d %i %u %x %X %o %p %r %R %b\n", c, s, i, i, u, x, x, o, p, s, s, b);

    return (0);
}
```

Output:
```
a hello, world! 123 123 123 123 123 123 0xdcd03a54 !dlrow ,olleh uryyb, jbeyq! 1010

```

## Usage

To use this program, follow these steps:

1. Clone the repository or download the source code.
2. Open a terminal and navigate to the directory containing the source code.
3. Create a `main.c` file and add the function `main(void)` and use the `_printf()` function.
4.Compile the program by running the command `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`.
5. Run the program by executing the command `./a.out`.
6. The program will output the corresponding string within the `_printf()`.

## Dependencies

This program does not have any dependencies outside of a C compiler.

## License

This program is licensed under the MIT License.

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors

* Vivian Dagbue - [VivianDee](https://github.com/VivianDee)
* Okodi Miebi Edward - [OkodiMiebiEdward](https://github.com/OkodiMiebiEdward)

## Acknowledgments

* This program was inspired by [ALX SE](https://www.alxafrica.com/).
