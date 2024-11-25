#include <stdarg.h>
#include "test_main.h"
#include <unistd.h>

/*
 * _printf - Function that emulates the printf function using the write function
 * @format: Instead of number of args, it keeps the format of the arguments
 * Return: Void
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;
	char *s;
	int c;

	count = 0;
	va_start(args, format);

	while (*format)
	{
		if (format == NULL)
		{	va_end(args);
			break;
		}
		if (*format == 's')
		{
			s = va_arg(args, char *);
			write(1, s, 1);
			count++;
		}
		if (*format == 'c')
		{
			c = va_arg(args, int);
			write(1, &c, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
