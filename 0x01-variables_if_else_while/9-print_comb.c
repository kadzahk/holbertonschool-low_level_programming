#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = '0'; num <= '9';)
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
