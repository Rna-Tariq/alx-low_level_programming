#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
*
* @s: input
*
* Return: length of a string.
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
	}
	return (i);
}
