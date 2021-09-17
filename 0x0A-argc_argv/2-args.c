#include <stdio.h>
/**
  *main - prints all arguments it receives.
  *@argc: number of arguments received.
  *@argv: array of size argc, containing all arguments received.
  *
  *Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
