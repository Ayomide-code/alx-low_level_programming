#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */

void times_table(void)
{
	int num1, mult, prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num1 * mult;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

