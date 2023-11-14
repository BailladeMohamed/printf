#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


int _putchar(char character);
int my_ printf_char(va_list args, int p_char);
int printf_string(va_list args, int p_char);
int printf_integer(va_list args, int p_char);
int my_ selector(const char *format, va_list args, int p_char);
int printf_binary(unsigned int num, int p_char);
int _printf(const char *format, ...);
int _x(unsigned int num, int p_char, int uppercase);

#endif
