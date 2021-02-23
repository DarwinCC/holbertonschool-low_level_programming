#include "holberton.h"
/**
 * _strchr - busca la subcadena needle
 *
 * @haystask: puntero en donde buscar(pajar)
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
		if (needle == 0 || *needle == '\0')
		{
			return (0);
		}
		i++;
	}
	return (NULL);
}
