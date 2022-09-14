#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int d, u, c;

	for (d = 0; d < 10; d++)
	{
		for (u = 0; u < 10; u++)
		{
			c = u * d;
			if (u == 0)
			{
				_putchar(c + '0');
			}

			if (c < 10 && u != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			} else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
