#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Function that recreates the function printf.
 * @format: Type of data to print.
 * Return: The count of characters impressed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char *str;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			if (*format == '\0')
			return (-1);
			format++;
			switch (*format)
			{
				case 'c':
					_printchar(va_arg(args, int));
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					count += _printstr(str);
					break;
				case '%':
					_printchar('%');
					count++;
					break;
				case 'd':
				case 'i':
					count += _printnumber(va_arg(args, int));
					break;
			}
		}
		else
		{
			_printchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
