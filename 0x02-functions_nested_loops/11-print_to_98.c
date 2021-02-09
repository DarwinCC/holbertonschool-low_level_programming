#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - función principal
 * @n: caracter
 * Description: busca caracteres en minúscula o mayúscula
 *
 * Return: indicar el valor de retorno
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
printf("\n");
}
