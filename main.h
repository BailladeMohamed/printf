#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#define F_MINUS 1
#define F_PLUS  2
#define F_ZERO  4
#define F_HASH  8
#define F_SPACE 16
#define BUFF_SIZE 1024

int _putchar(char character);
int printf_char(va_list args, int printed);
int printf_string(va_list args, int printed);
int printf_integer(va_list args, int printed);
int selector(const char *format, va_list args, int printed);
int printf_binary(unsigned int num, int printed);
int _printf(const char *format, ...);
int _x(unsigned int num, int printed, int uppercase);
int printf_octal(unsigned int num, int printed);
int printf_unsigned(unsigned int num, int printed);
int printf_reverse(va_list args, int printed);
int printf_pointer(va_list args, int printed);
int Print_rot13string(char *str);

#endif
