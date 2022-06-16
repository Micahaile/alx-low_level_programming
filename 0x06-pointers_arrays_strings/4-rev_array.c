#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integer
 * @n: number of element in arrays
 * Return: 0 success
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
