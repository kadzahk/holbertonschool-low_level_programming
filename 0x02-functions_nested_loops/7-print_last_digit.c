#include "main.h"
/**
 * print_last_digit - function
 * @n: variable of the function
 * Return: n % 10
 */
int print_last_digit(int n)
{
if (n < 0)
n *= -1;
_putchar('0' + (n % 10));
return (n % 10);
}
