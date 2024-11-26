#include "_main.h"
#include <unistd.h>
/**
* _print - Imprime un carácter en la salida estándar.
*
* @c: Carácter a imprimir.
*
* Return: Nada (void).
*/

void _print(int c)
{
	write(1, &c, 1);
}
