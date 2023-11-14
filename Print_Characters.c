#include "main.h"

/**
 * my_printf_char - my personal func that prints a char
 * @args: arguments containing the char to print
 * @p_char: number of char printed so far
 * Return: an uppdated count of printed characters
 */
int my_printf_char(va_list args, int p_char)
{
	char character = va_arg(args, int);

	_putchar(character);
	return (p_char + 1);
}
