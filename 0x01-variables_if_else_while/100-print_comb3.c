#include<stdio.h>

/**
*main - Entry point
*
*Description: print all possible different combinations of two digits.
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int x = 0;
	int y = 0;

	while (x <= 9)
	{
		if (x != y)
		{
			putchar (x + 48);
			putchar(y + 48);

			if (x + y != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		y++;
	}
	x++;
	putchar('\n');

	return (0);
}
