#include "main.h"

/**
* *create_array - a function that creates an array of chars,
* and initializes it with a specific char.
*
* @size: input, size of array.
* @c: input, char element.
*
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
	{
		return (0);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
