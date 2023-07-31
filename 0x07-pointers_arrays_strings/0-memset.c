#include "main.h"

/**
 * _memset - fills memory by constant byte
 * @s: string pointer
 * @b: constant byte
 * @n: number of bytes required
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		*(s + k) = b;
		k++;
	}

	return (s);
}
