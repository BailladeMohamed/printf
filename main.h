#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(va_list c);
int print_porcentage(void);
int selector(const char *format, va_list args, int p_char);
int print_string(va_list s);
int _putchar(char c);
int printf_int(va_list args);
int printf_dec(va_list args);


#endif
