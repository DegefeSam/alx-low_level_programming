#include <stdio.h>
#include <math.h>

/**
 * main - Starting function
 * Return: always 0
 */

int main(void)
{
	long int a, b, c;

	b = 612852475143;
	a = -1;

	while (b % 2 == 0)
	{
		a = 2;
		b /= 2;
	}
	for (c = 3; c <= sqrt(b); c = c + 2)
	{
		while (b % c == 0)
		{
			a = c;
			b = b / c;
		}
	}
	if (b > 2)
		a = b;

	printf("%ld\n", a);

	return (0);
}
