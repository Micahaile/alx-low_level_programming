#include <stdio.h>

/**
 * main-print both lower and upper case
 * Return : 0 success
 */
int main(void)
{
	char AlphA;

	for (AlphA = 'a'; AlphA <= 'Z'; AlphA++)
	{
		putchar(AlphA);
	}
	putchar('\n');
	return (0);
}
