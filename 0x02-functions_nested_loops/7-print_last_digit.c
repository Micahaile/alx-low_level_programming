#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: value to be checked
 * Return: numb
 */
int print_last_digit(int n)
{
	int numb;

	numb = n % 10;
	if (numb < 0)
		numb = numb * -1;
	_putchar(numb + '0');
	return (numb);
}
