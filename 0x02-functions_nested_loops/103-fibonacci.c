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
	unsigned long fib1 = 0, fib2 = 1, sum;
	int total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			total_sum += sum;
		}
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%d\n", total_sum);

	return (0);
}
