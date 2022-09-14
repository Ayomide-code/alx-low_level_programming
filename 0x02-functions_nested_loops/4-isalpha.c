#include "main.h"
/**
 * _isalpha - checks for all aphabet character
 * @c: the int  argument that will be used
 * Return: 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	{
		return (1);
	}

	else
		return (0);
}

