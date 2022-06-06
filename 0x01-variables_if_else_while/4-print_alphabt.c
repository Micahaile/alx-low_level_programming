#include <stdio.h>
/**
 * main - print alphabets except e and q
 * Return: 0 success
 */
int main(void)
{
	char me;

	for (me = 'a'; me <= 'z'; me++)
	{
	if (me == 'e' || me == 'q')
		continue;
	else
		putchar(me);
	}
	putchar('\n');
	return (0);
}
