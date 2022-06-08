#include "main.h"

/**
 * main - uses built in functions
 * print_alphabet_x10 - prints out the alphabet
 * Return: 0 (success)
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
	return (0);
