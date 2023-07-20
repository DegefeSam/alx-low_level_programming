#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: always 0
 */

void more_numbers(void)
{
	int a, b;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
				a++;
		}
		_putchar('\n');
		b++;
		a = 0;
	}
}
