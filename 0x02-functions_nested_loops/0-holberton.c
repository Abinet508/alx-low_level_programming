#include "main.h"

/**
 * main - Prints "Holberton" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
char c;
char s[] = "Holberton";

while (i <= 9)
{
	c = s[i];
	_putchar(c);
	i++;
}
_putchar('\n');
return (0);
}
