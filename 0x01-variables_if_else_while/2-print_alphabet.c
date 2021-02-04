#include <stdio.h>
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	int i;

	i = 97;

	do {
	putchar (i);
	i = i + 1;

	} while (i <= 122);
	putchar ('\n');
	return (0);
}
