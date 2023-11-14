#include "main.h"

/**
 * printf_strng - it prints a str
 * @args: List of args containing the strg to print
 * @p_char: nums of chars printed so far
 * Return: an uppdated count of printed chars
 */
int printf_strng(va_list args, int p_char)
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
