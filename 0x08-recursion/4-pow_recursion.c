#include "main.h"
/**
 * _pow_recursion - eturns the value of x raised to the power of y
 * @x: num to be powered
 * @y: power
 * Return: 0 success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
