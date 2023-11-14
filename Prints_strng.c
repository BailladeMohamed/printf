#include "main.h"

/**
 * printf_string - this will print a string
 * @args: List of arguments containing the string to print
 * @printed: Number of characters printed so far
 * Return: The updated count of printed characters
 */
int printf_string(va_list args, int printed)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		printed++;
		str++;
	}

	return (printed);
}
