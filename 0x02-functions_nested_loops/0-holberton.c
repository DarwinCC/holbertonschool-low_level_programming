#include "holberton.h"
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	char name[] = "Holberton";
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
