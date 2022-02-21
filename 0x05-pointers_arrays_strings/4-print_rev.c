#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 */
void print_rev(char *s)
{
	int l = 0;
	int ll;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (ll = l; ll > 0; ll--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
