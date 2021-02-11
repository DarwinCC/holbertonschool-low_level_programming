#include "holberton.h"
/**
 * more_numbers - función principal
 * Description: print numbers 0-9 * 9
 *
 * Return: indicar el valor de retorno
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
			putchar('0' + j / 10); /* j/10 es las decenas */
			}
			putchar('0' + j % 10); /* j%10 es las unidades */
		}
	putchar('\n');
	}
}
