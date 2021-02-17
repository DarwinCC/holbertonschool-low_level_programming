# include <time.h>
# include <stdio.h>
# include <stdlib.h>
/**
 * main - funcion principal
 *
 * Return: void
 */
int main(void)
{
	int length = 35;

	srand((unsigned int) time(0));
	while (length--)
	{
	putchar(rand() % 94 + 33);
	}
	printf("\n");

	return (0);
}
