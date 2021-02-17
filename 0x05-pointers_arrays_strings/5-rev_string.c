#include "holberton.h"
/**
 * rev_string - funcion principal
 *
 * @s: puntero char
 * Return: void
 */
void rev_string(char *s)
{
	int cont, i, j;

	for (cont = 0; s[cont] != '\0'; cont++)
		cont -= 1;

	for (j = 0; j < cont; j++, cont--)
		i = s[j];
		s[j] = s[i];
		s[i] = i;
}

