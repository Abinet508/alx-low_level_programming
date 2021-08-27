#include <stdio.h>
/**
 *main - entry point
 *Description: random number in n +ve/-ve
 *Return: 0 on success
 */
int main(void)
{
int num, i;
for (num = 48, i = 0; i < 10; num++, i++)
{
putchar(num);
if (i < 9)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
