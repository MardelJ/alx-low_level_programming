#include <stdio.h>

/**
 * main - printing all hexa nu,mbers
 * Return: 0 de sempre
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
