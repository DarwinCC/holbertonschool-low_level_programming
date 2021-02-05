#include <stdio.h>
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	int i = 48, f = 97; /* 48 y 97 son las posiciones del "0" y la "a" en ASCII */

	do {
	putchar (i); /*Nos permite visualizar el caracter*/
	i = i + 1;

	} while (i <= 57); /* 57 es la posicion del 9 en ASCII */

	do {
	putchar (f); /*Nos permite visualizar el caracter*/
	f = f + 1;

	} while (f <= 102); /* 102 es la posicion de la "f" en ASCII */
	putchar ('\n');
	return (0);
}
