#include "main.h"

/**
 * _printf - Implementation of the built-in printf function
 * @format: The format specifier string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed = 0;
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
			printed = selector(format, args, printed);
			format++;
		}
		else
		{
			_putchar(*format);
			printed++;
			format++;
		}
	}
	va_end(args);
	return (printed);
}
