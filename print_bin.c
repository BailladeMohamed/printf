#include "main.h"

/**
 * printf_bina - Prints a binary representation of a number
 * @num: The number to be printed in binary
 * @p_char: Count of printed characters
 * Return: Count of printed characters
 */

int printf_bina(unsigned int num, int p_char)
{
	int binary[32] = {0};
	int x = 0;

	if (num == 0)
	{
		_putchar('0');
		p_char++;
		return (p_char);
	}

	while (num > 0)
	{
		binary[x] = num % 2;
		num /= 2;
		x++;
	}

	while (x > 0)
	{
		x--;
		_putchar('0' + binary[x]);
		p_char++;
	}

	return (p_char);
}
