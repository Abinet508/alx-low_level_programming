#include "main.h"
/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_hbt[9] = "Holberton\n";

	while (n < 9)
	{
		_putchar(str_hbt[n]);
		n += 1;
	}
	return (0);
}
