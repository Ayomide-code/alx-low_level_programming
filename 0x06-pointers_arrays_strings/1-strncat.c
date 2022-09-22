#include "main.h"
#include <string.h>
/**
* _strcat - concatenate two strings but adds number of bytes
*@dest: string to append
*@src: string to be completed
*@n: integer to compare
*Return: returns new concatenbated string
*/

char *_strncat(char *dest, char *src, int n)
{
	
	strncat(dest, src, n);
	return (dest);
}
