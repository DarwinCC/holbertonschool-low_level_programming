#include "holberton.h"
/**
 * print_most_numbers - función principal
 * Description: imprime los numeros de 0-9 excepto 2 y 4
 *
 * Return: indicar el valor de retorno
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		_putchar ('0' + i);
	}
_putchar ('\n');
}
