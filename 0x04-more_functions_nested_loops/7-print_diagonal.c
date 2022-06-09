#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: computing value Return: 0
 */
void print_diagonal(int n)
{
	int s;
	int l;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			for (l = 0; l < s; l++)
				_putchar(' ');
			_putchar('\\');
			if (s == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
