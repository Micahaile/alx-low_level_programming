#include <stdio.h>
/**
 * main - print alphabets except e and  q
 * Return: 0 success
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha != 'e' || alpha != 'q')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
