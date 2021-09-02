#include "main.h"
/**
*_isupper - checks if letters are uppercase.
*@c: input.
*
*Return: 1 if c is uppercase
*0 otherwise.
*/
int _isupper(int c)
{
if ((c >= 65) && (c <= 91))
{
return (1);
}
else
{
return (0);
}
}
