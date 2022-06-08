#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabets 10x
 * Return: 0 sucess
 */
void print_alphabet_x10(void)
{
	char alpha;
	int rows;

	rows = 1;
	while (rows <= 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		rows++;
	}
}
