#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *print_alphabet -Entry point
 *
 *Return: Always 0
 */
void print_alphabet(void)
{
	for (char alpha='a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');
}

