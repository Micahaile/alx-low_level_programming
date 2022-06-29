#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: sring to be copied
 * Return: 0 sucess
 */
char *_strdup(char *str)
{
	int a, b;
	char *s;

	if (str == NULL)
		return (NULL);
	for (a = 0; a < str[a]; a++)
		a++;
	s = malloc(a * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		s[b] = str[b];
	}
	return (s);
}
