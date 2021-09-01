#include "main.h"
/**
 * main - Print "Holberton" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	int c=0;
	char holberton[10] = "Holberton\n";

	while (c < 10)
	{
		_putchar(holberton[c]);
		c++;
	}
	return (0);
}

