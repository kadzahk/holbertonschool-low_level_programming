#include "main.h"
/**
 * print_sign - function
 * @al: variable of the function
 * Return: dependent of the function
 */
int print_sign(int al)
{
if (al > 0)
{
_putchar('+');
return (1);
}
else if (al == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
