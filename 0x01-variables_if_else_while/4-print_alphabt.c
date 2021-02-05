#include <stdio.h>
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i = i + 1)
	{
		if (i != 101 && i != 113)
		putchar (i);
	}
	putchar ('\n');

	return (0);
}
