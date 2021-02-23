#include "holberton.h"
/**
 * _strstr - funcion principal
 *
 * @haystack: puntero en donde buscar(pajar)
 * @needle: puntero a buscar(aguja)
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&haystack[j]);
			}
		}
	}
	return (NULL);
}
