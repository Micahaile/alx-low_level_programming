#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: poniter to change
 * @to: string to change to pointer
 * Return: 0 success
 */
void set_string(char **s, char *to)
{
	*s = to;
}
