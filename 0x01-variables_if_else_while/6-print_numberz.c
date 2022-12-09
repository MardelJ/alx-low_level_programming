#include <stdio.h>

/**
 * main - Print every number from 0 to 9 usng putchar
 * Return: 0 as fully succedd
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
