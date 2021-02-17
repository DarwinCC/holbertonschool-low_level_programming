#include "holberton.h"
#include <stdio.h>

/**
 * print_array - funcion principal
 * @a: puntero
 * @n: numero entero
 */
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++) /*este for inicia el conteo de impresiones*/
	{
		printf("%d", a[cont]); /*imprime en orden el contenido de la matriz*/
		if (cont < (n - 1)) /*este if agrega ', ' hasta el penultimo elemento*/
			printf(", ");
	}
	printf("\n");
}
