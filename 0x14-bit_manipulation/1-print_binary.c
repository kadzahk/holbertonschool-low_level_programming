#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	int i, fl;

	if (n == 0)
		_putchar('0');
	for (fl = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			fl = 1;
		if (fl == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
