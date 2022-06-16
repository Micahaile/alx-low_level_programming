#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: first string to concat
 * @src: second string to concat
 * @n: max number of byte to concate
 * Return: 0 sucess
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
