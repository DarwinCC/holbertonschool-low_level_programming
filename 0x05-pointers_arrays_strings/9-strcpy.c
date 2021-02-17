#include "holberton.h"

/**
 * _strcpy - funcion principal
 * @dest: puntero
 * @src: puntero
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}
dest[cont] = '\0';
return (dest);
}
