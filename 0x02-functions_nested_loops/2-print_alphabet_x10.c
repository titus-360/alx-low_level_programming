#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *Description: printing alphabet
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int i, b;

	for (i = '0'; i <= '9'; i++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
