#include "main.h"
/**
 * print_line - print straight line
 * @n: length of line
 * Return: 0
 */
void print_line(int n)
{
	int r;

	for (r = 1; r <= n; r++)
	{
		if (n == 0 || n < 0)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
