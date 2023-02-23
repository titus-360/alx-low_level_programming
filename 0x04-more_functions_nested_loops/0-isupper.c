#include "main.h"
/**
 * _isupper - check if a char is uppercase
 * @c: is the char to be checked
 * Return: 1 if it's upper case and 0 if it's not upper case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
