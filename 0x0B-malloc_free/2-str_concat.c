#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 success
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		l++;
	s = malloc(sizeof(char) * l);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		s[j++] = s2[i];
	return (s);
}
