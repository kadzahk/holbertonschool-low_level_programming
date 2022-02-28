#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int v;
	int h;

	for (v = 0; v < 8; v++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[v][h]);
		_putchar('\n');
	}
}
