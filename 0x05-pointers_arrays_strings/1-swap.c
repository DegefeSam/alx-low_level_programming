#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: first argument
 *@b: second argument
 * Return: always zero
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
