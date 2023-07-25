#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: zero return.
 */
void rev_string(char *s)
{
	int c = 0;
	int n, m;
	char *str, temp;

	while (s[c] != '\0')
	{
		c++;
	}
	str = s;

	for (n = 0; n < (c - 1); n++)
	{
		for (m = n + 1; m > 0; m--)
		{
			temp = *(str + m);
			*(str + m) = *(str + (m - 1));
			*(str + (m - 1)) = temp;
		}
	}
}
