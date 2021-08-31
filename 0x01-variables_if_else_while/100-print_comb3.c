#include <stdio.h>
/**
 *main - entry point
 *Description: random number in n +ve/-ve
 *Return: 0 on success
 */
int main(void)
{
int n, k = 0, m;
for (n = 0; n < 9; n++)
{
for (m = k ; m <= 9; m++)
{
if (n != m)
{
putchar(n);
putchar(m);
}
if (n == m)
{
continue;
}
if (n == '8' && m == '9')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
k++;
}
putchar('\n');
return (0);
}
