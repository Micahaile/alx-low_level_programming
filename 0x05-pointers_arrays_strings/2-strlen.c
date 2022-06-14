#include "main.h"
/**
 * _strlen - print length of string
 * @s: string to be computed
 * Return: 0 success
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
