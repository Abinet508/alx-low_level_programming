#include "main.h"
/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_hbt[10] = "Holberton";
	str_hbt[10]='10';

	while (n < 10)
	{
		_putchar(str_hbt[n]);
		n += 1;
	}
	return (0);
}
