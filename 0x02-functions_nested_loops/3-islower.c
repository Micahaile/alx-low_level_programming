#include "main.h"
/**
 * _islower - check if lower case
 * @c: character to be checked here
 * Return: 1 if lower case,0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
