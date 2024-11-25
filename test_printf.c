#include <stdarg.h>
#include "test_main.h"
#include <unistd.h>

void *_print(int c)
{
	write(1, &c, 1);
}
void *_printstr(char *s)
{
	write(1, s, 1);
}
void *_printpercent(int c)
{
	write(1, c, 1);
}
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
