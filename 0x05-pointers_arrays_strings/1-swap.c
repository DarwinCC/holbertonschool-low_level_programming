#include "holberton.h"

/**
 * swap_int - funcion principal
 * @a: puntero entero
 * @b: puntero entero
 *
 * Description: Esta funcion invierte los punteros
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
