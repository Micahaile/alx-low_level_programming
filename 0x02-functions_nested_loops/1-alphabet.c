#include "main.h"
#include <unistd.h>
/**
 * main - print alphabets in lower case followed by new line
 * Return: 0 success
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
