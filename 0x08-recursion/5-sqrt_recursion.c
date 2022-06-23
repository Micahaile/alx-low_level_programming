#include "main.h"
/**
 * find_sqrt - returns the natural square root of a number
 * @a: guess at square root
 * @b: integet to find square root of
 * Return: 0 success
 */
int find_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (find_sqrt(a + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find square root of
 * Return: 0 sucess
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(1, n));
}
