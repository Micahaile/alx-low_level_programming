#include <stdio.h>
/**
 * main - print conbination of two two-digit numbers
 * Return: 0 success
 */
int main(void)
{
	int numb1;
	int numb2;

	for (numb1 = 0; numb1 <= 98; numb1++)
	{
		for (numb2 = numb1 + 1; numb2 <= 99; numb2++)
		{
			putchar((numb1 / 10) + '0');
			putchar((numb1 % 10) + '0');
			putchar(' ');
			putchar((numb2 / 10) + '0');
			putchar((numb2 % 10) + '0');
			if (numb1 == 98 && numb2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
