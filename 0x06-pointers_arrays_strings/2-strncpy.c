#include "main.h"

/**
* *_strncpy - a function that copies a string.
*
* @dest: first input.
* @src: second input.
* @n: third input.
*
* Return: a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
