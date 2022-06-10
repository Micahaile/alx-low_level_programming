#include "main.h"
/**
 * print_number - print the integer given
 * @n: integer to be printed
 * Return: o sucess
 */
void print_number(int n)
{
	unsigned int numb = n;

	if (n < 0)
	{
		_putchar('-');
		numb = -numb;
	}
	if ((numb / 10) > 0)
		print_number(numb / 10);
	_putchar((numb % 10) + '0');
}
