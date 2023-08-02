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
	int i;

	i = 0;

	if (s[i] == '\0')
	{
		putchar(s[i]);
		_print_rev_recursion(s - 1);
	}
	else if (s[i] != '\0')
	{
		putchar('\n');
	}
}
