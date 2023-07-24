#include "main.h"

/**
* *_strcpy - a function that copies the string pointed to by src,
*  including the terminating null byte (\0), to the buffer pointed to by dest.
*
* @dest: first integer.
* @src: second integer.
*
* Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (i != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
