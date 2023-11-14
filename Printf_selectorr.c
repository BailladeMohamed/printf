#include "main.h"

/**
 * selector - it selects the appropriate func based on the format speciifier
 * @format: format specifier str
 * @args: variable arg list
 * @p_char: count of chars printed
 * Return: The updated count of chars printed
 */
int selector(const char *format, va_list args, int p_char)
{
	switch (*format)
	{
	case 'c':
		p_char += print_char(args);
		break;
	case 's':
		p_char += print_string(args, p_char);
		break;
	case '%':
		p_char += print_porcentage();
		break;
	case 'd':
	case 'i':
		p_char += printf_int(args);
		break;
	default:
		_putchar('%');
		_putchar(*format);
		p_char += 2;
		break;
	}
	return (p_char);
}
