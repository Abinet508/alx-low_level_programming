#include <stdio.h>
/**
 *main - entry point
 *Description: random number in n +ve/-ve
 *Return: 0 on success
 */
int main(void)
{
int num, hexletter, n;
for (num = 48, n = 0; n < 10; num++, n++)
{
putchar(num);
}
for (hexletter = 97, n = 1; n < 7; hexletter++, n++)
{
putchar(hexletter);
}
putchar(10);
return (0);
}
