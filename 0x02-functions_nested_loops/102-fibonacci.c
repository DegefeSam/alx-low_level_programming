#include <stdio.h>

/**
 * main - produce 50 Fibonacci numbers
 * Return: finally retuns 0.
 */
int main(void)
{
	int c;
	unsigned long d = 0, e = 1, number;

	for (c = 0; c < 50; c++)
	{
		number = d + e;
		printf("%lu", number);
		d = e;
		e = number;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
