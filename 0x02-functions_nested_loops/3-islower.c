#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * @c: character to be checked
 * Return: 1 if alpha is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
