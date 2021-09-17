#include <stdio.h>
/**
  *main - prints the number of arguments passed to it.
  *@argc: number of arguemnts.
  *@argv: array of size argc.
  *
  *Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc - 1; i++)
	{}

	printf("%d\n", i);
	return (0);
}
