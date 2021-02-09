#include "holberton.h"
/**
 * print_last_digit - función principal
 * Description: imprime el último dígito de un numero
 *
 * Return: indicar el valor de retorno 0
 */
int print_last_digit(int r)
{
if (r%10 < 0)
{
_putchar(-r%10)
}
else 
{
_putchar(r%10)
}
return (r%10)
}
