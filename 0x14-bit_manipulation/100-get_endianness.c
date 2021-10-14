#include "main.h"
/**
  *get_endianness - determines the endianness of a machine.
  *
  *Return: 0 big endian, 1 little endian.
  */
int get_endianness(void)
{
	unsigned int x = 0x7343211;

	char *c = (char *)&x;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
