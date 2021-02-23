#include "holberton.h"
/**
 * _strchr - funcion principal
 *
 * @s: puntero
 * @c: caracter buscado
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
		if (!s[i])
		return (0);
	}
	return (&s[i]);
}
