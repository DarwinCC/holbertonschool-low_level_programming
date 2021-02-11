#include "holberton.h"
/**
 * print_square - función principal
 * Description: muestra el signo de un número
 * @size: numero
 *
 * Return: indicar el valor de retorno
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			{
			for (j = 0; j < size; j++)
				{
				_putchar ('#');
				}
			_putchar ('\n');
			}
	}
	else
	{
	_putchar ('\n');
	}
}
