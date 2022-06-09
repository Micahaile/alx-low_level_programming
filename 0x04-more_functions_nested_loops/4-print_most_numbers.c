#include "main.h"
/**
 * print_most_numbers - print all except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
		if (numb == 2 || numb == 4)
			continue;
		else
			_putchar((numb % 10) + '0');
	_putchar('\n');
}
