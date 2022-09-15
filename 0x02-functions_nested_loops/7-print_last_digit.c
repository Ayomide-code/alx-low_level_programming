#include "main.h"
/**
 * print_last_digit - function to print the last digit
 * @n: the number in the function
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
