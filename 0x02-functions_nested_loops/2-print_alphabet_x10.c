#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - prints 10 times lowecase alphabet
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
        char alpha , num;

	for (num = 0; num <= 9; num++)
	{
        	for (alpha = 'a'; alpha <= 'z'; alpha++)
        	{
               		 _putchar(alpha);
       	 	}
		
                _putchar('\n');
	}
}
