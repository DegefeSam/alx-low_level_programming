#include "main.h"
/**
 * _islower - Checks for lowercase alphabet
 * @alpha: character to be checked
 * Retun: 1 if alpha is lowercase
 */

int _islower(int alpha) 
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else
		return (0);
}