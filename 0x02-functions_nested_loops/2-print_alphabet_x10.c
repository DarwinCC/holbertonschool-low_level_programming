#include "holberton.h"
/**
 * print_alphabetx10 - función principal
 * Description: imprime el abecedario 10 veces
 *
 * Return: indicar el valor de retorno 0
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	do
	{
		do
		{
		_putchar (i);
		i++;
		} while (i <= 'z');
		i = 'a';
	j++;
	_putchar ('\n');
	} while (j <= 9 );
}

