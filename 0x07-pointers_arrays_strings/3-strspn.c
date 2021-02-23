#include "holberton.h"
/**
 * _strspn - funcion principal
 *
 * @s: puntero
 * @accept: puntero del caracter a imprimir
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (!(accept[j]))
		break;
	}
	return (i);
}
