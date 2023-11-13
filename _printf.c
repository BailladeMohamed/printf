#include "main.h"

/**
 * _printf - our printf function
 * @format: The format string
 * 
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int p_char = 0;
char ch;

if (format == NULL)
return (-1);

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == '\0')
{
va_end(args);
return (-1);
}
/* Handle format specifiers */
format++;
}
else
{
ch = *format;
write(1, &ch, 1);
p_char++;
format++;
}
}

va_end(args);

return (p_char);
}
