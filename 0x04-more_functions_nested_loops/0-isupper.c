#include "main.h"
#include "holberton.h"
/**
 *_isupper - checks if letters are uppercase.
 *@c: input.
 *
 *Return: 1 if c is uppercase
 *0 otherwise.
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
