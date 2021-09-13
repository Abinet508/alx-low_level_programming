#include "main.h"
/**
  *_strstr - locates a substring.
  *finds first occurence of the substring needle in
  *haystack.
  *@haystack: pointer to string.
  *@needle: pointer to substring.
  *
  *Return: pointer to beginning of located string
  *or NULL if substring isnt located.
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *needlestr = needle;

		while (*needlestr && *haystack && *haystack == *needlestr)
		{
			haystack++;
			needlestr++;
		}

		if (!*needlestr)
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (0);
}
