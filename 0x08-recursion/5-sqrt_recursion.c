#include "main.h"

/**
 * chksqrt - check for  square root of intger n
 * @n: integer whose sqrt is to be computed
 * @num: intger for checking
 * Return: result
 */
int chksqrt(int n, int num)
{

	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);
	return (chksqrt(n, num + 1));

}

int _sqrt_recursion(int n)
{

	return (chksqrt(n, 1));

}
