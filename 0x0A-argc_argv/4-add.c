#include <stdio.h>
#include <stdlib.h>
/**
  *main - adds and prints sum of positive numbers
  *followed by a new line.
  *@argc: number of arguments passed.
  *@argv: pointer to array of size argc, containing
  *arguments passed.
  *
  *Return: 0 on success.
  *1 on error.
  */
int main(int argc, char *argv[])
{
	int count, count2, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		for (count2 = 0; argv[count][count2] != '\0'; count2++)
		{
			if (argv[count][count2] < '0' || argv[count][count2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
