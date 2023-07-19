#include <stdio.h>

/**
 * main - sum of even-valued Fibonacci sequence
 * Return: Always 0.
 */
int main(void)
{
	unsigned long d = 0, e = 1, number;
	float number1;

	while (1)
	{
		number = d + e;
		if (number > 4000000)
			break;

		if ((number % 2) == 0)
			number1 += number;

		d = e;
		e = number;
	}
	printf("%.0f\n", number1);

	return (0);
}
