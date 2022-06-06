#include <stdio.h>
/**
 * main - print lower and upper case
 * Return: 0 success
 */
int main(void)
{
	char alpha;
	char alpha2;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
	{
		putchar(alpha2);
	}
	putchar('\n');
	return (0);
}
