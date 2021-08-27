#include <stdio.h>
/**
 *main - entry point
 *Description: random number in n +ve/-ve
 *Return: 0 on success
 */
int main(void)
{
int num;
for (num = 0; num < 100; num++)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num < 99)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
