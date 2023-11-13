#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: The number of characters printed
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	write(1, &ch, 1);
	return (1);
}
