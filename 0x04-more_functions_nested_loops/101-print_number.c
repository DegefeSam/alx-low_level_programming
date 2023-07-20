#include "main.h"

/**
 * print_number - print integers
 * @n: To be printed
 */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		k = -n;
		_putchar('-');
	}
	else
	{
		k = n;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + '0');
}
