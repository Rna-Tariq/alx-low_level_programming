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
	len = i;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
