#include "main.h"
/**
 * _isalpha - check if alphabet
 * @c: alphabet to be checked
 * Return: 1 if alphabet , return 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
