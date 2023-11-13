#include "main.h"

/**
 * _printf - prints and input into the standard output
 * @format: the format string
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	int sum = 0;
	va_list list;
	char *p, *start;

	params_t params = PARAMS_INIT;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))/* checking for NULL char */
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		init_params(&params, list);
		if (*p != '%')/*checking for the % specifier*/
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
	va_end(ap);
	return (sum);
}
