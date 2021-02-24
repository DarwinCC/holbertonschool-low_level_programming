#include "holberton.h"
/**
 * _strlen_recursion - print a string in reverse, recursively
 *
 *
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
	i++;
	return (_strlen_recursion(&s[i]) + 1);
	}
return (0);
}
