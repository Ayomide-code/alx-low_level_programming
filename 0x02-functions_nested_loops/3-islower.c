#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: is the int that the argument will use
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
