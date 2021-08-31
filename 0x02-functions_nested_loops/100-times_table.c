#include "main.h"
/**
 *print_times_table - n times table.
 *@n: the number defines the table.
 *
 *Return: no return value
 */
void print_times_table(int n)
{
	int i, j, k,product;
	j = n + 1;
	for (i = 0; i < j; i++)
	{
		for (k = 0; k < j; k++)
		{
			if (n > 15)
			{
				break;
			}
			else
			{
				product = i * k;
				if (k == 0)
		       		{
					_putchar('0' + product);
				}
				else if (product >= 10)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' +  (product % 10));
				}
				else if (product >= 100)
				{
	       
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				if (k != n)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}

