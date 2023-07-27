#include "main.h"

/**
* *string_toupper - a function that changes all lowercase
* letters of a string to uppercase.
*
* @s: first input.
*
* Return: Uppercase string.
*/

char *string_toupper(char *s)
{
	int i, len;

	len = 0;

	while (s[i] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(s[i] + 32);
	}
	return (s);
}
