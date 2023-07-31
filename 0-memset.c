#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: string pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: returns a pointer
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
