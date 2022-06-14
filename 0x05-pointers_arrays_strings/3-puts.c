#include "main.h"
/**
 * _puts - print string
 * @str: string to be printed
 * Return: 0 success
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
