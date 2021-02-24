#include "holberton.h"
/**
 * _print_rev_recursion - funcion principal que invierte una cadena
 *
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		_print_rev_recursion(&s[i]);
		_putchar(s[0]);
	}
}
