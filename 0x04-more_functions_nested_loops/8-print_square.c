#include "main.h"
/**
 * print_square - print square
 * @size: size of squere
 * Return: 0
 */
void print_square(int size)
{
	int len;
	int wid;

	for (len = 1; len <= size; len++)
	{
		for (wid = 1; wid <= size; wid++)
		{
			if (size == 0 || size < 0)
				continue;
			_putchar('#');
		}
		_putchar('\n');
	}
}
