#include "holberton.h"
/**
 * print_alphabet_x10 - función principal
 * Description: imprime el abecedario 10 veces
 *
 * Return: indicar el valor de retorno 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
	_putchar ('\n');
	}
}

