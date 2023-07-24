#include "main.h"

/**
* puts2 - a function that prints every other character of a string,
* starting with the first character, followed by a new line.
*
* @str: input.
*
* Return: void.
*/

void puts2(char *str)
{
	int i, len, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (j = 0; j <= len; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
