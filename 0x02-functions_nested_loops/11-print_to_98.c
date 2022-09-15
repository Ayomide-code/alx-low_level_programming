#include "main.h"
/**
 * print_to_98 - Function to print all natural numbers
 * @n: Number to begin count
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}
}
