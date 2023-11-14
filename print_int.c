#include "main.h"

/**
 * printf_integer - it prints an integer number
 * @args: number args containing the int to print
 * @p_char: it counts of printed characters
 * Return: count of printed chars
 */

int printf_integer(va_list args, int p_char)
{
	long  num = va_arg(args, int);
	int digits = 0;
	long temp = num;
	int digit;

	if (num < 0)
	{
		p_char += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		p_char += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (p_char);
}
