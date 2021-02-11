#include "holberton.h"
/**
 * print_line - función principal
 * Description: imprime ene guiones
 * @n: numero
 *
 * Return: indicar el valor de retorno
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n >= 1)
		{
		_putchar('_');
		n--;
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
