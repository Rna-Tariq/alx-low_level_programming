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
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
