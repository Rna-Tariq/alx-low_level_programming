#include "main.h"

/**
* print_to_98 - function that prints all natural numbers
* from n to 98, followed by a new line.
*
* @n: input
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", count);
		}
	}
	else
	{
		for (i = n; i < 98; i--)
		{
			printf("%d, ", count);
		}
	}
	printf("98 \n");
}
