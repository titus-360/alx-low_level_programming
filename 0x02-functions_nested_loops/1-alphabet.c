#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: printing alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
