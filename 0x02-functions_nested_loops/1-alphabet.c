#include "main.h"
#include <unistd.h>
/**
 * print_alphabet -Entry point
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;
	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');
}

