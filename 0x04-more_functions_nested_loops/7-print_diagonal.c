#include "holberton.h"
/**
 * print_diagonal - función principal
 * Description: imprime \
 *
 * @n: numero entero
 *
 * Return: indicar el valor de retorno
 */
void print_diagonal(int n)
{
	int col, row;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < row; col++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
