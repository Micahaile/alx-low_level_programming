#include "main.h"
/**
 * _strncat - concatenate two strings 
 * @dest: first string to concate
 * @src: second string to concate
 * @n: number of bytes to append
 */
char *_strncat(char *dest, char *src, int n)
{
	int i =0 , j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
