#include <unistd.h>
#include "main.h"
/**
 *main - entry point.
 *Description: program starts and ends here.
 *Return: 0 on success.
 */
int main(void)
{
char *text = "Holberton";
char space='\n';  
int i;
for (i = 0; i < 9; i++)
{
write(1, &space, 1);
}

return (0);
}
