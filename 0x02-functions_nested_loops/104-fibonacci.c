#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0;

	for (i = 0; i < 97; i++)
	{
		printf("%lu, ", x);
		sum = x + y;
		x = y;
		y = sum;
		if (i == 96)
			printf("%lu\n", x);
	}
	return (0);
}
