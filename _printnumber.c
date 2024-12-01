#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
* _printnumber - Prints a single character to stdout.
* @n: Character to print.
* Return: it returns count.
*/
int _printnumber(int n)
{
	int count = 0;
	unsigned int num = n;
	char digit;

	if (n < 0)
	{
		write(1, "-", 1);
		num = -n;
		count++;
	}

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (num / 10)
	{
		count += _printnumber(num / 10);
	}

	digit = (num % 10) + '0';
	write(1, &digit, 1);
	count++;

	return (count);
}
