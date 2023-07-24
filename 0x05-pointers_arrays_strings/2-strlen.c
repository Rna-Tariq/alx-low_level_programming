#include "main.h"

/**
* _strlen - a function that returns the length of a string.
*
* @s: input.
*
* Return: length of a string.
*/

int _strlen(char *s)
{
	int i, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += i;
	}
	return (count);
}
