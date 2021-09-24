#include <stdlib.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len = 0, lens1;
char *str;

if (s1 != NULL)
for (i = 0; s1[i] != '\0'; i++)
len++;
lens1 = len;
if (s2 != NULL)
{
if (sizeof(s2) > n)
for (i = 0; i < n; i++)
len++;
else
for (i = 0; s2[i] != '\0'; i++)
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
str[len] = '\0';
if (s1 != NULL)
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
if (s2 != NULL)
for (; i < len; i++)
str[i] = s2[i - lens1];
return (str);
}
