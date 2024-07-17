#include "main.h"
/**
 * _print_char - check
 * @arg: va_list
 * Return: size of char
 */
int _print_char(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}    
