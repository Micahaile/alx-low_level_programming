#include "main.h"
/**
 * more_numbers - print number upto 14 ,10 times
 * Return: 0
 */
void more_numbers(void)
{
	int numb;
	int rows;

	for (rows = 0; rows <= 9; rows++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			if (numb > 9)
				_putchar((numb / 10) + '0');
		_putchar((numb % 10) + '0');
		}
		_putchar('\n');
	}
}
