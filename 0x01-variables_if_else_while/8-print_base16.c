#include <stdio.h>
/**
 * main - print hexadecimal numbers
 * Return: 0 success
 */
int main(void)
{
	int numb;
	char alpha;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar((numb % 10) + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
