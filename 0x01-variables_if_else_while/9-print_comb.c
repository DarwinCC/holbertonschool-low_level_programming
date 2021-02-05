#include <stdio.h>
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	int i = 48;

	do {
	putchar(i);
	if (i++ != 57)
		{
		putchar(44);
		putchar(32);
		}
	} while (i <= 57);
	putchar ('\n');
	return (0);
}
