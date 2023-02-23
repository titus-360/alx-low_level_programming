#include "main.h"
/**
 * _isdigit - check if a char is number
 * @c: is the char to be checked
 * Return: 1 if it's number and 0 if it's not number
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
