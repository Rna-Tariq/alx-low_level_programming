#include "main.h"

/**
* puts_half - a function that prints half of a string, followed by a new line.
*
* @str: input.
*
* Return: void.
*/

void puts_half(char *str)
{

	int i, len, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (j = 0; j <= len / 2; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
