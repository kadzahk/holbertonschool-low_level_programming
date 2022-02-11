#include <stdio.h>
/**
 *main - print lowercase alpha a-z but remove 'q' and 'e'
 *Return: Always 0 (Success)
 */
int main(void)
{
char al = 'a';
while (al <= 'z')
{
if ((al != 'q') && (al != 'e'))
{
putchar(al);
}
al++;
}
putchar('\n');
return (0);
}
