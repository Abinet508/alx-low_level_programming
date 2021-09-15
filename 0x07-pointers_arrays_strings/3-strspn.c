#include "main.h"
#include <stdio.h>
/**
  *_strspn - gets the lenght of a prefix substring.
  *@s: pointer to strin.
  *@accept: pointer to bytes that are checked
  *for in s.
  *
  *Return: return number of bytes in the initial
  *segment of s which consist only of bytes from
  *accept.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, count1, match = 0;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] != 32)/* check for spaces */
		{
			count1 = 0;
			while (accept[count1] != '\0')
			{
				if (accept[count1] == s[count])
				{
					/* increment if mathc is found */
					match = match + 1;
				}
				count1++;
			}
		}
		else
			return (match);

		count++;
	}
	return (match);
}
