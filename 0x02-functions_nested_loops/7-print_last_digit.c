#include "holberton.h"
/**
 * print_last_digit - función principal
 * Description: imprime el último dígito de un numero
 * @r: numero
 *
 * Return: indicar el valor de retorno 0
 */
int print_last_digit(int r)
{
	int i = r % 10;

	if (i < 0)
	{
	i = -i;
	}
	_putchar('0' + i);
return (i);
}
