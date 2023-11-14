#include "main.h"

/**
 * _x - Print a hexadecimal number
 * @num: The number to be printed in hexadecimal
 * @printed: Count of printed characters
 * @uppercase: Flag indicating uppercase representation
 *(1 for uppercase, 0 for lowercase)
 * Return: Updated count of printed characters
 */

int _x(unsigned int num, int printed, int uppercase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = 48 + remainder;
		}
		else
		{
			if (uppercase)
			{
				hex[i] = 65 + (remainder - 10);
			}
			else
			{
				hex[i] = 97 + (remainder - 10);
			}
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			printed++;
		}
	}
	return (printed);
}
