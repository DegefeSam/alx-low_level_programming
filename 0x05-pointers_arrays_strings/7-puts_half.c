#include "main.h"

/**
* puts_half - prints half of a string
* @s: pointer to the string to print
* Return: void
*/

void puts_half(char *s)
{
	int l, k;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	k = (l + 1) / 2;

	while (s[k])
	{
		_putchar(s[k]);
		k++;
	}
	_putchar('\n');
}
