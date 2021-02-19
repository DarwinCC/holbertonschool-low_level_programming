#include "holberton.h"
/**
 * string_toupper - convierte las minúsculas en mayúsculas
 * @string: puntero array a convertir
 *
 * Return: char
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z') /* 'a' = 97 'z' = 122 */
		string[i] -= 32;
	}
return (string);
}
