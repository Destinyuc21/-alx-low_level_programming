#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int u;

	if (d < 0)
		d = -d;

	u = d % 10;

	if (u < 0)
		u = -u;

	_putchar (u + '0');

	return (u);
}
