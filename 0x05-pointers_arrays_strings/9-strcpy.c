#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: buffer to copy string
 * @src: string to be copied
 * Return: 0 success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;


	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
