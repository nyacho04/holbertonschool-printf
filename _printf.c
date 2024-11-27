#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "_main.h"
/**
 * _printf - Function that recreates the function printf
 * @format: Type of data to print
 * Return: The count of characters impressed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char *str;
	va_list args;

	va_start(args, format);
	if (format == NULL || *format == '\0')
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
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
