#include "main.h"

/**
 * my_selector - selects the apropriate format func
 * @format: format specifier
 * @args: List of args
 * @p_char: nums of chars printed so far
 * Return: an updated count of printed chars
 */
int my_selector(const char *format, va_list args, int p_char)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			p_char = printf_int(args, p_char);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			p_char++;
			break;
		case 's':
			p_char = printf_strng(args, p_char);
			break;
		case '%':
			_putchar('%');
			p_char++;
			break;
		case 'b':
			p_char = printf_bina(va_arg(args, unsigned int), p_char);
			break;
		default:
			p_char += _putchar('%');
			p_char += _putchar(*format);
			break;
	}
	return (p_char);
}
