#include "main.h"
/**
  * countBits - count number of bits to be flipped.
  * @x: xor of n and m.
  *
  * Return: number of bits.
  */
unsigned int countBits(unsigned int x)
{
	unsigned int count;

	count = 0;
	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
/**
  * flip_bits - returns the number of bits needed to flip.
  * @n: number.
  * @m: number.
  *
  * Description: Number of bits neded to flip to get from one number
  * to another.
  * Return: number of bits.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countBits(n ^ m));
}
