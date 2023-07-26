#include "main.h"

/**
 *_strncat - concatenates two strings.
 *@src: pointer to source
 *@dest: pointer to destination
 *@n : bytes of src
 *Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}

	return (dest);
}
