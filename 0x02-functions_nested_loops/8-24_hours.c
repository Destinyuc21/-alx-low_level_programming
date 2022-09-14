#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int d, u;

	d = 0;

	while (d < 24)
	{
		u = 0;
		while (u < 60)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(':');
			_putchar((u / 10) + '0');
			_putchar((u % 10) + '0');
			_putchar('\n');
			u++;
		}
		d++;
	}
}
