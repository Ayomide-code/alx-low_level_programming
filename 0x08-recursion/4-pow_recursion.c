#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to power y
 * @x: number to be raised to power
 * @y: the power of the number
 *Return: If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
