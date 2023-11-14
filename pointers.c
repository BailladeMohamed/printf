#include "main.h"

#define MAX_HEX_DIGITS 16

/**
 * printf_pointer - Prints the hexadecimal representation of a pointer
 * @args: List of arguments (pointer)
 * @printed: Number of characters printed so far
 * Return: Updated count of printed characters
 */

int printf_pointer(va_list args, int printed)
{
	void *ptr = va_arg(args, void*);
	unsigned long num = (unsigned long) ptr;
	int digits = 0;
	int i;
	unsigned long temp = num;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";/*its equal to 16*/
	char hex[MAX_HEX_DIGITS];

	if (ptr == NULL)
	{
		printed += write(1, "(nil)", 5);
		return (printed);
	}
	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}
	printed += _putchar('0');
	printed += _putchar('x');

	if (num == 0)
	{
		printed += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			int digit = num % 16;

			hex[i] = hex_digits[digit];
			num /= 16;
		}
		for (i = 0; i < digits; i++)
		{
			printed += _putchar(hex[i]);
		}
	}
	return (printed);
}
