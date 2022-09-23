#include <stdio.h>
#include "main.h"

/**
*string_toupper - changes all lowercase of a string to uppercase
*@str: string to change
*Return: str
*/

char *string_toupper(char *str)
{
	int n = 0;

while (str[n] != '\0')
{
	if (str[n] >= 'a' && str[n] <= 'z')
	str[n] -= 32;
	n++;
}
return (str);
}
