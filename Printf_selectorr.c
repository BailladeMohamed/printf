#include "main.h"

/**
 * selector - Selects the appropriate format function based on the specifier
 * @format: The format specifier
 * @args: List of arguments
 * @printed: Number of characters printed so far
 * Return: The updated count of printed characters
 */
int selector(const char *format, va_list args, int printed)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			printed = printf_integer(args, printed);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			printed++;
			break;
		case 's':
			printed = printf_string(args, printed);
			break;
		case '%':
			_putchar('%');
			printed++;
			break;
	}
	return (p_char);
}
