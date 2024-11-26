#include "_main.h"
#include <unistd.h>
/**
* _printchar - Imprime un carácter en la salida estándar.
*
* @c: Carácter a imprimir.
*
* Return: Nada (void).
*/

void _printchar(int c)
{
	write(1, &c, 1);
}
