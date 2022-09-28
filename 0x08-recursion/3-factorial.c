#include "main.h"

/**
 * factorial - to print the factorial of any number
 * @n: number to compare
 *
 * Return: If n is lower than 0, the function should return -1
 */

int factorial(int n);
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)

		return (n);
	else
		return (n * factorial(n - 1));
}

