#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "_main.h"
/**
* _printstr - Prints a single character to stdout.
* @s: Character to print.
* Return: it returns count.
*/
int _printstr(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i])
	{
	write(1, &s[i], 1);
		i++;
	}

	return (i);
}
