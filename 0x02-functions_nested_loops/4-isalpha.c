#include "main.h"

/**
* _isalpha - function to check if character is alphabet
*
* @c: checks input of function
*
* Return: returns 1 if 'c' is alphabet
* otherwise always 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
