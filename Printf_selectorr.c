#include "main.h"

/**
 * selector - Selects the appropriate format function based on the specifier
 * @format: The format specifier
 * @args: List of arguments
 * @p_char: Number of printed characters
 *
 * Return: The updated count of printed characters
 */
int selector(const char *format, va_list args, int p_char)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			p_char = printf_int(args);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			p_char++;
			break;
		case 's':
			p_char = print_string(args);
			break;
		case '%':
			_putchar('%');
			p_char++;
			break;
		default:
			break;
	}

	return (p_char);
}
