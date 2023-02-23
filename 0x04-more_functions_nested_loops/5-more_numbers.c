#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 tenth time
 * Return: no return
 */

void more_numbers(void)
{

int i, x;
	for (i = 1; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
