#include "holberton.h"
/**
 * print_sign - función principal
 * Description: muestra el signo de un número
 *
 * Return: indicar el valor de retorno
 */
int print_sign(int n)
{
if(n > 0)
	{
	_putchar('+');
	return (1);
	}
else if (n == 0)
	{
	_putchar('o');
	return (0);
	}
else
	{
	_putchar('-');
        return (-1);
	}
}
