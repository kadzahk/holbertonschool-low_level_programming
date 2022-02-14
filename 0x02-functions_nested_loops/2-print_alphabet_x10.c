#include "main.h"
/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
char al;
int  cc = 0;
while (cc < 10)
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
cc++;
}
}
