#include "main.h"
/**
 * _strcat - concatinate two strings
 * @dest: string to concate with src
 * @src: string to concate with dest
 * Return: 0 success
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = (src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
