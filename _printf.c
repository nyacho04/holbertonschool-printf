#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list ap; // permite acceder a cada argumento en la lista de argumantos variables, dependiendo de su tipo y posición //
	int count = 0; // lleva la cuenta del número de caracteres impresos //
	const char *ptr; // puntero que se utiliza para recorrer los characters printeados //

	va_start(ap, format); // inicia el va list para qu apunte al primer argumento variable despues de format //

	for (ptr = format; *ptr != '\0'; ptr++) // repite sobre cada caracter de la cadaena format con ptr //
		{
		if (*ptr != '%') // si el caracter actual no es &, imprime usando _putchar y suma +1 con count //
		{
		_putchar(*ptr);
		count++;
		}
		else
		{
		if (*(ptr + 1) == '\0')
		{
			_putchar('%');
			count++;
			break;
		}
		switch (*(++ptr)) // switch es una estructura de valor que permite ejecutar diferentes bloques de codigo dependiendo el valor //
		{
			
				case 'c': // si el caracter actual no es %, lo imprime usando _puthcar y lo incremena con count //
				_putchar(va_arg(ap, int));
				count++;
				break;
				case 's': // imprime una cadena de caracteres uasndo (char*) o (null) en caso de NULL //
				{
				char *str = va_arg(ap, char *); // uso va_arg para extraer el siguiente argumento de tipo char en la lista de argumentos //
				if (str == NULL) // si el str es NULL, utilizo la función write para que printee (null) //
				{
					count = write(1, "(null)", 6);
					
				}
				else 
				{
					 while (*str != '\0') // en caso de que no sea NULL, se repite sobre la cadena utilizando while, esta verifica si el aracter actual (*str) //
						 		// es diferente de \0 (character nulo del final de la cadena) //
                                {
                                        _putchar(*str);
                                        str++;
                                        count++;
				}
                                }
				break;
				}

				case '%': // printea un solo % //
					_putchar('%');
					count++;
					break;
				default: //  si no coincide con ningún especificador conocido, imprime % seguido del caracter encontrado y aumenta count en 2 //
					_putchar('%');
					_putchar(*ptr);
					count += 2;
					break;
				case '\0':
					break;
		}
	}	
}
	va_end(ap);
	return (count); // retorna count con el numero de caracteres impresos //
}

