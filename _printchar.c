#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
 * _printchar - Prints a single character to stdout
 * @c: Character to print
 */
void _printchar(int c)
{
(write(1, &c, 1));
}
