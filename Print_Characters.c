#include "main.h"

/**
 * printf_char - it prints a char
 * @args: a list of arguments containing the char to print
 * @p_char: number of char printed so far
 * Return: an uppdated count of printed characters
 */
int printf_char(va_list args, int p_char)
{
	char character = va_arg(args, int);

	_putchar(character);
	return (p_char + 1);
}
