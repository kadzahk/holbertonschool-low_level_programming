#include <stdio.h>
/**
 *main - print 0123456789
 *Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num < 10)
{
printf("%i", num);
num++;
}
putchar('\n');
return (0);
}
