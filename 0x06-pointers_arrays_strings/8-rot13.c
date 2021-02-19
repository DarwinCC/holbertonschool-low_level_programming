#include "holberton.h"
/**
 * rot13 - convierte las minúsculas en mayúsculas
 * @string: puntero array a convertir
 *
 * Return: char
 */
char *rot13(char *string)
{
	char s[] = "abcdefghijklmABCDEFGHIJKLM";
	char r[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if(string[i] == s[j])
			{
			string[i] = s[j];
			}
			else if (string[i] == r[j])
			string[i] = s[i];
		}
	}
return(string);
}
