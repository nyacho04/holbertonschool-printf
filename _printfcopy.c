#include <stdarg.h>
#include "_main.h"
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...)
{

    int count;
    va_list args;
    int c;

    count = 0;

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
                c = va_arg(args, int);

                _print(c);
                count++;
            }
            else
            {
            _print(*format);
            count++;
            }
     }
        format++;
    }       

    va_end(args);
    return (count);
}

int _printf_s(const char *format, ...)
{
int count;
va_list args;
char *s;

    count = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {

    if (*format == '%')
        {
            format++;
            if (*format == 's')
            {
                 s = va_arg(args, char *);
                
                if (s == NULL)
                    s = "(null)";
                _printstr(s);
                count += strlen(s);
            }
            else
            {
                _print(*format);
                count++;
            }
        }
            format++;
    }
    va_end(args);
    return (count);
}
int _printf_prc(const char *format, ...)
{
int count;
va_list args;

    count = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {

    if (*format == '%')
        {
            format++;
            if (*format == '%')
            {
                _print('%');
                count++;
            }
        
            else
            {
            _print(*format);
            count++;
            }
        } 
        format++;
    }

    va_end(args);
    return (count);
}
