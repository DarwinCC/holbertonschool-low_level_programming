#include "holberton.h"
/**
 * _memcpy - funcion principal
 *
 * @dest: string destino
 * @src: string de origen
 * @n: numeros de bytes a llenar
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
