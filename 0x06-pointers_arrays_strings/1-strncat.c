#include "main.h"

/**
 *_strcat - concatenates two strings.
 *@src: pointer to source
 *@dest: pointer to destination
 *@n : bytes of src
 *Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (src[b] && b < n != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}

	return (dest);
}
