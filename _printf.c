#include <stdarg.h>
#include "_main.h"
#include <stddef.h>

int _printf(const char *format, ...)
{
	int count = 0;
	int len = 0;
	int c = 0;
	char *s;
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
			c = va_arg(args, int);
			_printchar(c);
			count++;
		}
		else if (*format == 's')
			{
			s = va_arg(args, char *);

			if (s == NULL)
				s = "(null)";

			while (s[len])
			{
			_printchar(s[len]);
				len++;
			}
			count += len;
			}
		else if (*format == '%')
			{
				_printpercent();
				count++;
			}
			else
			{
				_printpercent();
				_printchar(*format);
				count++;
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