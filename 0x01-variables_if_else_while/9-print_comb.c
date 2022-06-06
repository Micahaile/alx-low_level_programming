#include <stdio.h>
/**
 * main - print numbers separate with comma
 * Return: 0 success
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar((numb % 10) + '0');
		if (numb == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
