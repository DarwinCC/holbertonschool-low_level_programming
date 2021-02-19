#include "holberton.h"
/**
 * leet - convierte las minúsculas en mayúsculas
 * @string: puntero array a convertir
 *
 * Return: char
 */
char *leet(char *string)
{
	char letras[] = "aAeEoOtTlL";
	char numero[] = "4433007711";
	int i, j; /* i=recore el string y j recorre nuestro array */

	for (i = 0; string[i] != '\0'; i++) /* navega dentro de nuestro string */
	{
		for (j = 0; letras[j] != '\0'; j++) /* navega dentro de letras */
		{
			if (string[i] == letras[j]) /* compara 'string' con 'letras' */
			{
			string[i] = numero[j];
			}
		}
	}
return (string);
}
