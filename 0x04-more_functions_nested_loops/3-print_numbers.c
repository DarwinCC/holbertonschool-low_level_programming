#include "holberton.h"
/**
 * print_numbers - función principal
 * Description: print numbers 0-9
 *
 * Return: indicar el valor de retorno
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	_putchar(i);
	}
_putchar('\n');
}
