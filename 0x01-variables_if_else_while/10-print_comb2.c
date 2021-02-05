#include <stdio.h>
/**
 * main - punto de entrada de un programa
 * Return: indicar el valor de retorno 0
 */
int main(void)
{
	int i, f;

	i = 0;
	while (i <= 9)
	{
		f = 0;
		while (f <= 9)
		{
			putchar (0 + i);
			putchar (0 + f);
			if (i != 9 || f != 9)
			{
				putchar (44);
				putchar (32);
			}
			f = f + 1;
		}
		i = i + 1;
	}
	putchar ('\n');
	return (0);
}
