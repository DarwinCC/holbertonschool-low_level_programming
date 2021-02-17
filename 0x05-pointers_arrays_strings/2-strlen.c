#include "holberton.h"
/**
 * _strlen - función principal
 * @s: puntero
 * Description: imprime el abecedario
 *
 * Return: indicar el valor de retorno 0
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
