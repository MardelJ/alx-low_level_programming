#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the phrase given in the description
 * Return: Always 0 when well succeded
 */
int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
