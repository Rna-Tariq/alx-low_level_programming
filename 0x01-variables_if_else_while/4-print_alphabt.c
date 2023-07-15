#include <stdio.h>

/**
*main - Entry point
*
* Description: print all aphabet letters
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char char = 'a';

	while (char <= 'z')
{
		if (char == 'e' || char == 'q')
			char++;
		putchar (char);
		char++;
}
		putchar('\n');

	return (0);
}
