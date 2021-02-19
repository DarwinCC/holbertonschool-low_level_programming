#include "holberton.h"
/**
 * _strncpy - copia una cadena
 *
 * @dest: string de destino
 * @src: string de entrada
 * @n: numero de bytes(indice)
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
return (dest);
}
