#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	const char *ptr;

	va_start(ap, format);

	for (ptr = format; *ptr != '\0'; ptr++)
		{
		if (*ptr != '%')
		{
		_putchar(*ptr);
		count++;
		}
		else
		{
		if (*(ptr + 1) == '\0')
		{
			_putchar('%');
			count++;
			break;
		}
		switch (*(++ptr))
		{
			
				case 'c':
				_putchar(va_arg(ap, int));
				count++;
				break;
				case 's':
				{
				char *str = va_arg(ap, char *);
				if (str == NULL)
				{
					write(1, "(null)", 6);
					count += 6;
				}
				else
				{
					 while (*str != '\0')
                                {
                                        _putchar(*str);
                                        str++;
                                        count++;
				}
                                }
				break;
				}

				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar(*ptr);
					count += 2;
					break;
				case '\0':
					break;
		}
	}	
}
	va_end(ap);
	return (count);
}

