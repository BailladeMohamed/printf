#include "main.h"

/**
 * _printf - its the implementation of the built-in printf func
 * @format: format specifier str
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int p_char = 0;
	va_list args;

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				va_end(args);
				return (-1);
			}
			p_char = selector(format, args, p_char);
			format++;
		}
		else
		{
			_putchar(*format);
			p_char++;
			format++;
		}
	}
	va_end(args);
	return (p_char);
}
