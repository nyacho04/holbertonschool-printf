#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
* _printnumber - Prints a single character to stdout.
* @n: Character to print.
* Return: it returns count.
*/
void _printnumber(int n)
{
	char buffer[11];

	int i = 0;

if (n == 0)
	{
	write(1, "0", 1);
	}
	if (n < 0)
	{
	write(1, "-1", 1);
	n = -n;
	}
while (n > 0)
	{
	buffer[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	while (i >= 0)
	{
	write(1, &buffer[i--], 1);
	}
}
