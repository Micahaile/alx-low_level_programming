#include <stdio.h>
/**
 * main - print base 10 numbers
 * Return: 0 success
 */
int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar((numb % 10) + '0');
	}
	putchar('\n');
	return (0);
}
