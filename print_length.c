#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Type char pointer
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		;
	return (length);
}

/**
 * _strlenc - Strlen function but applied for const char pointer s
 * @str: Type char pointer
 *
 * Return: Length of the string.
 */
int _strlenc(const char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		;
	return (length);
}
