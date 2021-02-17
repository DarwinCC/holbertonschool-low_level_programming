#include "holberton.h"

/**
 * print_rev - prints reverse
 * @s: puntero
 *
 * Return: void
 */
void print_rev(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}

	for (cont -= 1; cont >= 0; cont--)
	{
		_putchar(s[cont]);
	}
	_putchar('\n');
}
