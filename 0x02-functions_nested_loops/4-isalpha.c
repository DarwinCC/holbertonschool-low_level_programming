#include "holberton.h"
/**
 * _isalpha - función principal
 * Description: busca caracteres en minúscula o mayúscula
 *
 * Return: indicar el valor de retorno
 */
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
        else
        return (0);
}
