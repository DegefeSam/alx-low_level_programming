#include "main.h"
/**
 * _islower - Checks for lowercase
 *
 * Retun: if character is lower zero otherwise
 */
int _islower(int alpha) /* alpha is a character to be checked */
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else
		return (0);
}
