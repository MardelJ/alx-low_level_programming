#include <stdio.h>

/**
 * main - Script to print each lowercase letter
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);

}
