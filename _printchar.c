#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
 * _printchar - Prints a single character to stdout
 * @c: Character to print
 */
int _printchar(int c)
{
return (write(1, &c, 1));
}
