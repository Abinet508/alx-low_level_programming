#include "main.h"
/**
 *print_rev - prints strin in reverse.
 *@s: pointer to string.
 *
 *Return: void.
 */
void print_rev(char *s)
{
	int length, last;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	last = length - 1;
	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
