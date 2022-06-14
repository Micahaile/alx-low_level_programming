#include "main.h"
#include <stdio.h>
/**
 * print_array -prints n elements of an array of integers
 * @a: array of the integer
 * @n: number of elements
 * Return: 0 success
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
