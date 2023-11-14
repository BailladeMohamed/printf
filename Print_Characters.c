#include "main.h"

/**
 * printf_char - This will print a character
 * @args: List of arguments containing the character to print
 * @printed: Number of characters printed so far
 * Return: The updated count of printed characters
 */
int printf_char(va_list args, int printed)
{
	char character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}
