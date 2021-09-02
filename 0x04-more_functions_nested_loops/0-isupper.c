/**
 *_isupper - check for upper case letter.
 *@c: character to check the case.
 *
 *Return: 1 if c is upper case letter
 *0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
