#include "main.h"
#include <stdio.h>
/**
 * _abs - function that compute absolute value of integer
 * @c: is the int used for the argument
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

