#include "main.h"

/**
 * factorial - returns factorial of an integer n
 * @n: integer to be facorized
 * Return: returns factorial values
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
