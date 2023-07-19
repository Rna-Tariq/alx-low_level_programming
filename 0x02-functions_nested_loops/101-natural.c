#include <stdio.h>

/**
*  main - Entry point
*
* Description: Prints the sum of even-valued
* Fibonacci sequence not exceed 4000,000
*
* Return: 0 Success
*/

int main(void)
{
	int i, sum;
		for (i = 1; i < 1024; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
			}
		}
	printf("%d\n", sum);

	return (0);
}
