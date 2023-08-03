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
/**
 * _sqrt_recursion - returns square root of an integer n
 * @n: number whose square root is to be computed
 * Return: computation value
 */
int _sqrt_recursion(int n)
{

	return (chksqrt(n, 1));

}
