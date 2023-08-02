#include "main.h"

/**
* _print_rev_recursion - function that prints a string in reverse.
*
* @s: input
*
* Return: void.
*/

void _print_rev_recursion(char *s)
{
	int i, len, j;

	len = 0;

	while (s[i] != '\0')
	{
		len++;
	}

	if (j <= len)
	{
		putchar(s[i]);
		_print_rev_recursion(s[i++]);
	}
	else
	{
		putchar('\n');
	}
}
