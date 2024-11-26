#include <stdarg.h>
#include "_main.h"
#include <unistd.h>
/**
 * _printf - Emulates the printf function using write.
 * 
 * @format: The format string containing the text and specifiers.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                int c = va_arg(args, int);

                _print(c);
                count++;
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                
                if (s == NULL)
                    s = "(null)";
                _printstr(s);

            }
            else if (*format == '%')
            {
                _print('%');
                count++;
            }
            else
            {
                _print('%');
                _print(*format);
            }
        }
        else
        {
            _print(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return (count);
}
