#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char du;
	int i;

	i = 0;

	while (i < 10)
	{
		du = 'a';
		while (du <= 'z')
		{
			_putchar(du);
			du++;
		}
		_putchar('\n');
		i++;
	}
}
