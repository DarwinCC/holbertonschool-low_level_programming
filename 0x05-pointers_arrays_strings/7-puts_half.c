#include "holberton.h"

/**
 * puts_half - funcion principal
 * @str: puntero
 *
 */

void puts_half(char *str)
{
	int a;
	int b;
	int c;

	for (a = 0; str[a] != '\0'; a++)
		b++;
	if (b % 2 != 0)
		c = (b + 1) / 2;
	else
		c = b / 2;
	for (a = c; a < b; a++)
		_putchar(str[a]);
	_putchar('\n');
}
