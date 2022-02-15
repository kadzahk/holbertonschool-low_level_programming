#include "main.h"
/**
 * times_table - function to print 9 tables
 */
void times_table(void)
{
int r;
int c;
int product;
for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
product = (r * c);
if (c == 0)
{
_putchar('0' + product);
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
}
