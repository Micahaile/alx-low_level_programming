#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: sring to be copied
 * Return: 0 sucess
 */
char *_strdup(char *str)
{
	int a, b = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (a = 0; a < str[a]; a++)
		b++;
	s = malloc(sizeof(char) * (b + 1));
	if (s == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		s[a] = str[a];
	s[b] = '\0';
	return (s);
}
