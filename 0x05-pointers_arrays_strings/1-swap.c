#include "main.h"

/**
*swap_int - swaps teo integers' value
*@a: first number to swap
*@b: second number to swap
*Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
