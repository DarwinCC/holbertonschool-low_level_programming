#include <stdio.h>
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
		if (i != 101 && i != 113)
		putchar (i);
		i = i + 1;
		else
		i = i + 1;
	putchar ('\n');

	return (0);
}
