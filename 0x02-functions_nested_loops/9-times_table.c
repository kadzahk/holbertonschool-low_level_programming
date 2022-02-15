#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int q, w, e;

	for (q = 0; q < 10; q++)
	{
		for (w = 0; w < 10; w++)
		{
			e = w * q;
			if (w == 0)
			{
				_putchar(e + '0');
			}

			if (e < 10 && w != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
			} else if (e >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
