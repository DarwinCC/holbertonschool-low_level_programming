#include "holberton.h"
/**
 * _abs - función principal
 * @r: numero
 * Description: valor absoluto
 *
 * Return: indicar el valor de retorno
 */
int _abs(int r)
{
if (r > 0)
{
return (r);
}
else if (r < 0)
{
return (-r);
}
else
{
return (0);
}
}
