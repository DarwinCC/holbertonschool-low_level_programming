#include <stdio.h>

/**
 * main - This program print the numbers from 0 to 9.
 *
 * Return: 0.
 */

int main(void)
{
	int i = 0;

	do {
	printf("%d", i++);

	} while (i <= 9);
	putchar('\n');

	return (0);
}
