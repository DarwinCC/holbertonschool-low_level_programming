#include <stdio.h>
/**
 * main - función principal
 *
 * Return: valor de retorno
 */
int  main(void)
{
	long long int num, fprimo, fmax;

	fprimo = 2;
	num = 612852475143;
	while (num > 1)
	{
		if (num % fprimo == 0) /* verifica si es divisible */
		{
			fmax = fprimo;
			num = num / fprimo;
		}
		else
		{
			k++;
		}
	}
	printf("%ld\n", fmax);
	return (0);
}
