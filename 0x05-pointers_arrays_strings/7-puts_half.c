#include "main.h"
/**
 * puts_half -print half of string
 * @str: string to be printed
 * Return: 0 success
 */
void puts_half(char *str)
{
	int i = 0, l = 0, n;

	while (str[i++])
		l++;
	if ((l % 2) == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;
	for (i = n; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
