#include "main.h"

/**
 * _strlen - returns string length
 * @s: argument string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
