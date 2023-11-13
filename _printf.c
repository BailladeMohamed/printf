#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int numb = 0; 
  
    while (*format) {
        if (*format == '%') {
            format++; // Move past '%'
            switch (*format) {
                case 'c':
                    num += putchar(va_arg(args, int));
                    break;
                case 's': {
                    const char *str = va_arg(args, const char *);
                    while (*str) {
                        numb += putchar(*str);
                        str++;
                    }
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    numb += printf("%d", num);
                    break;
                }
                case '%':
                    numb += putchar('%');
                    break;
                default:
                    numb += putchar('%'); // Print the '%' character if an unsupported specifier is encountered
                    break;
            }
        } else {
            numb += putchar(*format);
        }
        format++;
    }

    va_end(args);
    return numb;
}
