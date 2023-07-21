#include "main.h"

/**
* print_diagonal - function draws a diagonal line on the terminal.
*
* @n: input
*
* Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j < i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
