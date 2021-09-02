#include "main.h"
/**
 * _isupper - checks for uppercase.
 * @c: character to check.
 * Return: 1 if c is uppercase, otherwise return 0.
 */
/**
 * _isupper - Checks for an uppercase letter
 * @c: The int value of character to evaluate
 *
 * Return: 1 if uppercase, other case 0.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
