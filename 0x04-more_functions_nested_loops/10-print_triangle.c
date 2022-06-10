#include "main.h"
/**
 * print_triangle - print tringle
 * @size: size of triangle
 * Return: 0 success
 */
void print_triangle(int size)
{
	int sp;
	int pr;

	if (size > 0)
	{
		for (sp = 1; sp <= size; sp++)
		{
			for (pr = size - sp; pr > 0; pr--)
				_putchar(' ');
			for (pr = 0; pr < sp; pr++)
				_putchar('#');
			if (sp == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');

}

