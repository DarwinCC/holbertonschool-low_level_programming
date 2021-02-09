#include "holberton.h"
/**
 * print_sign - función principal
 * Description: muestra el signo de un número
 * @n: numero
 *
 * Return: indicar el valor de retorno
 */
int print_sign(int n)
{
	if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
