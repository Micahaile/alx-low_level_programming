#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: to be copied at
 * @src: memory to copy
 * @n: number of byte to copy
 * Return: 0 success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
