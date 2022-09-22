#include "main.h"

/**
*_strcat - concatenate two strings but adds number of bytes
*@dest: string to append
*@src: string to be completed
*@n: integer to compare
*Return: returns new concatenbated string
*/

char *_strncat(char *dest, char *src, int n)
{

int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index <n; index++)
dest[dest_len++] = src[index];

return (dest);
