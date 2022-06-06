#include <stdio.h>
/**
 * main - print possible 3 digit combination base 10 number
 * Return: 0 success
 */
int main(void)
{
	int numb1;
	int numb2;
	int numb3;

	for (numb1 = 0; numb1 <= 7; numb1++)
	{
		for (numb2 = numb1 + 1; numb2 <= 8; numb2++)
		{
			for (numb3 = numb2 + 1; numb3 <= 9; numb3++)
			{
				putchar((numb1 % 10) + '0');
				putchar((numb2 % 10) + '0');
				putchar((numb3 % 10) + '0');
				if (numb1 == 7 && numb2 == 8 && numb3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
