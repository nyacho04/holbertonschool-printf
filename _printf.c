#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/*
 * _printf - Function that emulates the printf function using the write function
 * @format: Instead of number of args, it keeps the format of the arguments
 * Return: Void
 */

int _printf(const char *format, ...)
{
	int count;
	va_list args;

	count = 0;
	va_start(args, format);

	while (*format)
	{
		if (format == NULL)
		{	
			va_end(args);
			break;
		}
		if (*format == 'c')
		{
			_print(c);
			count++;
			return (count);
		}
		if (*format == 's')
		{
			_printstr(s);
			count++;
			return (count);
		}
		if (*format == '%')
		{
			_printpercent(s);
			count++;
			return (count);
		}
		format++;	
	}
	va_end(args);
	return (count);
}








































}
