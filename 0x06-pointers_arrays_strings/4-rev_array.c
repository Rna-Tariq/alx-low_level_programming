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
	int i, j, temp;

	temp = 0;

	for (i = 0; j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
