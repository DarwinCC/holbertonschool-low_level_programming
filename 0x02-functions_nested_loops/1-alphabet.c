#include "holberton.h"
/**
 * print_alphabet - función principal
 * Description: imprime el abecedario
 *
 * Return: indicar el valor de retorno 0
 */
void print_alphabet(void)
{
	char i = 'a';

	do
	{
	_putchar (i);
	i++;
	} while (i <= 'z');
	_putchar ('\n');
}
