#include "main.h"
/**
 * _isalpha - chacks for alphabetic order
 * @c: alphabet to be checked
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'));
}
