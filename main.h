#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


int _putchar(char character);
int my_printf_char(va_list args, int p_char);
int printf_strng(va_list args, int p_char);
int printf_int(va_list args, int p_char);
int my_selector(const char *format, va_list args, int p_char);
int printf_bina(unsigned int num, int p_char);
int _printf(const char *format, ...);
int Printf_mo(int p_char);

#endif
