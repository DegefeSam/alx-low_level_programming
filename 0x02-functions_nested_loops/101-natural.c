#include <stdio.h>

/**
 * main - searches natural numbers below 1024 which are multiples of 3 or 5.
 * Return: Always 0.
 */
int main(void)
{
	int d; 
	int number = 0;

	for (d = 0; d < 1024; d++)
	{
		if ((d % 3) == 0 || (d % 5) == 0)
			number = number + d;
	}

	printf("%d\n", number);

	return (0);
}
