#include "main.h"

/**
 * _strncpy - copies strings
 * @src : A pointer to source string
 * @dest : A pointer to destination to be changed
 * @n : number of bytes from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
