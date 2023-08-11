#include "main.h"

/**
* *malloc_checked - a function that allocates memory using malloc.
*
* @b: input1
*
* Return: a pointer to the allocated memory OR NULL
*/

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
