#include "holberton.h"
/**
 * reverse_array - invierte la cadena de arrays
 * @a: puntero array a invertirse
 * @n: numero de elementos del array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	temp = 0;
	n -= 1; /* para que coincida con # de indice */
	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

