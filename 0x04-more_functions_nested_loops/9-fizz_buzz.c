#include <stdio.h>
/**
 * main - función principal
 * Description: clasifica numeros del 1-100
 *
 * Return: indicar el valor de retorno
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
		printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz");
		}
			else
			{
			printf("%d", i);
			}
		if (i < 100)
		printf(" ");
	}
printf("\n");
return (0);
}
