#include "holberton.h"
/**
 * _isupper - función principal
 * @c: caracter
 * Description: busca caracteres en Mayuscula
 *
 * Return: indicar el valor de retorno
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
