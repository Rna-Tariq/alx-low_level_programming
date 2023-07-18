#include "main.h"

/**
*main - Entry point
*
*Description: print _putchar.
*
*Return: 0 Success.
*/

int main(void)
{
	char str[] = "putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		-putchar (str[ch]);
	_putchar('\n');
	}

	return (0);
}
