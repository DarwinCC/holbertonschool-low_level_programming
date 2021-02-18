#include "holberton.h"
/**
 * _strncat - concatena 2 strings
 *
 * @dest: string de destino
 * @src: string de entrada
 * @n: numero de bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
return (dest);
}
