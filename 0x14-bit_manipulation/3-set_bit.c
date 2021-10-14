#include  "main.h"
/**
  *getp - returns the value of x to the power of y.
  *@x: number.
  *@y: power.
  *
  *Return: x to the power of y.
  */
int getp(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * getp(x, y - 1));
}

/**
  *set_bit - stes the value of a bit to one at a given index.
  *@n: pointer to number.
  *@index: index of bit.
  *
  *Return: 1 if it worked, -1 if it did not.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index < 64)
	{
		*n += getp(2, index);
	}
	else
	{
		return (-1);
	}
	return (1);
}
