#include "holberton.h"
/**
 * _memset - funcion principal
 *
 * @s: puntero
 * @b: constante a copiar
 * @n: numeros de bytes a llenar
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n || s[i] != '\0'; i++)
	{
		s[i] = b;
	}
return (s);
}
