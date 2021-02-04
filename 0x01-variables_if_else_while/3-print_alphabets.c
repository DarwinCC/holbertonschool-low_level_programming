#include <stdio.h>
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	int i = 97, n = 65;

	do {
	putchar (i);
	i = i + 1;

	} while (i <= 122);

	do {
	putchar (n);
	n = n + 1;

	} while (n <= 90);
	putchar ('\n');
	return (0);
}
