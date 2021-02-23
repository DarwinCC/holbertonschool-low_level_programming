#include "holberton.h"
/**
 * print_diagsums - funcion principal
 *
 * @a: puntero
 * @size: tamaño
 * Return: char
 */
void print_diagsums(int *a, int size)
{

	int i;
	int j,suma = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
			suma += a[(size + 1) + i];
			printf("%i, ",suma);
			}
			suma = 0;
			if (i + j == size - 1)
			suma += a[(size - 1) * (i + 1)];
			printf("%i, ",suma);
		}
	}
}

