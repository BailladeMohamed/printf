#include "main.h"

/**
 * printf_reverse - Prints a string in reverse order
 * @args: List of arguments (string)
 * @printed: Number of characters printed so far
 * Return: Updated count of printed characters
 */

int printf_reverse(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;

	}

	return (printed);
}
