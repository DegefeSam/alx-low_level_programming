#include "main.h"

/**
 * _strlen_recursion - print a string
 * @s:input string
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	unsigned int k = 0;

	if (*(s + k) != '\0')
	{
		k++;
		k += _strlen_recursion(s + k);
	}

	return (k);
}
