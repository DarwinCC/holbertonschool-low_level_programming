#include "holberton.h"
/**
 * _islower - función principal
 * @c: caracter
 * Description: busca caracteres en minuscula
 *
 * Return: indicar el valor de retorno
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
