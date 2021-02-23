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
	int i = 0;

	while (needle[i])
	{
		while (*haystack)
		{
			if (*haystack == needle[i])
			{
				return (haystack);
			}
			haystack++;
		}
		if (needle[i] == 0 || needle[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (NULL);
}
