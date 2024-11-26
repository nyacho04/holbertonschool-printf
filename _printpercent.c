#include "_main.h"
#include <unistd.h>
/**
* _printpercent - Imprime el carácter '%' en la salida estándar.
*
* Return: Nada (void).
*/

void _printpercent(void)
{
	char c = '%';

	write(1, &c, 1);
}
