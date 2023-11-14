#include "main.h"

/**
 * Print_rot13string - Prints a string in ROT13 cipher format
 * @str: The input string
 * Return: The number of characters printed
 */

int Print_rot13string(char *str)
{
	int printed = 0;

	if (str == NULL)
		return (0);

	while (*str)
	{
		char c = *str;

		if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		{
			if (('a' <= c && c <= 'm') || ('A' <= c && c <= 'M'))
				c += 13;
			else
				c -= 13;
		}
		printed += _putchar(c);
		str++;
	}

	return (printed);
}
