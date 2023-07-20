#include "main.h"

/**
 * print_line - draws a straight line
 *Return: always 0
 * @n: number of times a ine is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
