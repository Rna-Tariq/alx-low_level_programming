#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers.
*
* @a: first input.
* @n: second input.
*
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i == 0)
		{
			_putchar(a[i] + 48);
		}
		else if (i > 0)
		{
			_putchar(a[i] + 48);
                        _putchar(',');
                        _putchar(' ');
		}
	}
	_putchar('\n');
}
