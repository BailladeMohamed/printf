#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0; 

    while (*format) {
        if (*format == '%') {
            format++;
            
            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    count += putchar('%');
                    break;
                default:
                   
                    count += putchar('%');
                    count += putchar(*format);
                    break;
            }
        } else {
            count += putchar(*format);
        }

        format++;
    }

    va_end(args);
    return count;
}

int main() {
    _printf("Hello, %s! The answer is %d%%. Character: %c\n", "world", 42, 'A');
    return 0;
}
