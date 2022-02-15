<<<<<<< HEAD
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
=======
#include "main.h"
/**
* times_table - function to print 9 tables
*/
void times_table(void)
{
int r, p, c;
for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
p = (r * c);
if (c == 0)
{
_putchar('0' + p);
}
else if (p <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + p);
}
else if (p > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (p / 10));
_putchar('0' + (p % 10));
}
}
_putchar('\n');
}
}
>>>>>>> 0cc1b1e5f5ea23adc221f093634498d4a9caf1a5
