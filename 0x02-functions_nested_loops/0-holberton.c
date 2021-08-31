#include <unistd.h>
#include "main.h"
/**
 *main - entry point.
 *Description: program starts and ends here.
 *Return: 0 on success.
 */
int main(void)
{
char *j = "Holberton";
int i;
for (i = 0; i < 10; i++)
{
_putchar(j[i]);
}
_putchar('\n');
return (0);
}
