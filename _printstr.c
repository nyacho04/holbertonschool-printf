#include "_main.h"
#include <unistd.h>
/**
* _printstr - Imprime una cadena de caracteres en la salida estándar.
*
* @s: Puntero a la cadena a imprimir.
*
* Return: Nada (void).
*/

void _printstr(char *s)
{
	int i = 0;

	if (s == NULL)
		return;

	for (i = 0; s[i] != '\0'; i++)

	{
		write(1, &s[i], 1);
	}
}
