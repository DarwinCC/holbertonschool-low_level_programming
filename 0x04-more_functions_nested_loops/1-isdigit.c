#include "holberton.h"
/**
 * _isdigit - función principal
 * @c: caracter
 * Description: verifica si el numero es de 1 cifra
 *
 * Return: indicar el valor de retorno
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);

}
