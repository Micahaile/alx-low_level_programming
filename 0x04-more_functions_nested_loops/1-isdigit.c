#include "main.h"
/**
 * _isdigit - check if c is digit
 * @c: character to be checked
 * Return: 1 if integer between 0 and 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
