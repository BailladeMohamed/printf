#include "main.h"

/**
 * _printf - implementaation of a built-in printf func
 * @format: format specifier str
 * Return: number of characters priinted
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
			p_char += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (p_char);
}
