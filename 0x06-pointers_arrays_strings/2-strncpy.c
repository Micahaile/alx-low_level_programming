#include "main.h"
/**
 * _strncpy - copies string
 * @dest: string copied into
 * @src: string to be copied
 * @n: max number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
