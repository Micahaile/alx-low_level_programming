#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory space
 * @b: byte to be fill with
 * @n: number of space
 * Return: 0 success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
