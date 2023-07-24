#include "main.h"

/**
* print_rev - a function  that prints a string,
* in reverse, followed by a new line.
*
* @s: input.
*
* Return: void.
*/

void print_rev(char *s)
{
	int i, len, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
