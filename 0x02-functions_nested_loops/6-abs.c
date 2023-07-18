#include "main.h"

/**
*  _abs - function that computes the absolute value of an integer.
*
* @n: checks input of function.
*
* Return: Absolute n.
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
