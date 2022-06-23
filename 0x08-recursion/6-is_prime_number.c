#include "main.h"
/**
 * find_prime - check to see if num is prime
 * @a: factor check
 * @b: possible prime number
 * Return: 0 success
 */
int find_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (find_prime(a + 1, b));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: num to check if is prime
 * Return: 0 success
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (find_prime(2, n));
}
