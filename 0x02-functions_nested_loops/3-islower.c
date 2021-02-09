#include "holberton.h"
/**
 * _islower - función principal
 * Description: busca caracteres en minuscula
 *
 * Return: indicar el valor de retorno 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z' )
	return (1);
	else 
	return (0);
}
