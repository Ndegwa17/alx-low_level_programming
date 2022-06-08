#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * main -uses built in function
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
