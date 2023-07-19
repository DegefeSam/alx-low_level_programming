#include <stdio.h>

/**
 * main - produce 98 Fibonacci numbers
 * * Return: Always 0.
 */
int main(void)
{
	int c;
	unsigned long d = 0, e = 1, my_sum;
	unsigned long d11, d12, e11, e12;
	unsigned long half1, half2;

	for (c = 0; c < 92; c++)
	{
		my_sum = d + e;
		printf("%lu, ", my_sum);

		d = e;
		e = my_sum;
	}
	d11 = d / 10000000000;
	e11 = e / 10000000000;
	d12 = d % 10000000000;
	e12 = e % 10000000000;

	for (c = 93; c < 99; c++)
	{
		half1 = d11 + e11;
		half2 = d12 + e12;
		if (d12 + e12 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (c != 98)
			printf(", ");

		d11 = e11;
		d12 = e12;
		e11 = half1;
		e12 = half2;
	}
	printf("\n");
	return (0);
}
