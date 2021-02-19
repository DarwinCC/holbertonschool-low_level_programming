#include "holberton.h"
/**
 * cap_string - convierte en mayusculas las primeras letras
 * de cada oración
 * @string: puntero array a convertir
 *
 * Return: char
 */
char *cap_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z') /* 'a' = 97 'z' = 122 */
		string[i] -= 32;
	}
return (string);
}
