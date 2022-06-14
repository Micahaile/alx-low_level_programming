#include "main.h"
/**
 * swap_int - swaps value of two integer
 * @a: first integer
 * @b: second integer
 * Retunr: 0 success
 */
void swap_int(int *a, int *b)
{
	int sw = *a;

	*a = *b;
	*b = sw;
}
