#include "main.h"
#include <stdlib.h>
/**
  *_strpbrk - seraches a string for any of a set of bytes.
  *it locates the first occurence in the string s of any of
  *the bytes in the string accept.
  *@s: pointer to string.
  *@accept: pointer to strin to be matched.
  *
  *Return: pointer to byte in s that matches one of the bytes
  *in accept ot NULL if no such byte is found.
  */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int counter, counter2;

	p = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (counter2 = 0; accept[counter2]; counter2++)
		{
			if (accept[counter2] == s[counter])
			{
				p = &s[counter];
				return (p);
			}
		}
	}
	return (p);
}
