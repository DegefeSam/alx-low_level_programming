#include "main.h"
/**
 * _islower - Checks for lowercase
 * alpha: character to be checked
 * Retun: 1 if character is lower zero otherwise
 */
int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else
		return (0);
}
