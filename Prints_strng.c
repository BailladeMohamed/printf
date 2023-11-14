#include "main.h"

/**
 * print_string - This function prints a string
 * @args: List of arguments containing the string to print
 * @p_char: Number of characters printed so far
 *
 * Return: The updated count of printed characters
 */
int print_string(va_list args, int p_char)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		p_char++;
		str++;
	}

	return (p_char);
}
