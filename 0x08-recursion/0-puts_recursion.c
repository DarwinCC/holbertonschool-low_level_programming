#include "holberton.h"
/**
 * _puts_recursion - funcion principal
 *
 * @s: puntero
 *
 *
 * Return: char
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
	_putchar (s[i]);
	i++;
	_puts_recursion(&s[i]);
	}
	else
	{
	_putchar ('\n');
	}
}
