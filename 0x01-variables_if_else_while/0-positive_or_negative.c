#include <stdio.h>
/**
 * main - mus check if this is positive or negative
 * Return: 0 when succeded
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%D is zero\n", n);
	else if (n < 0)

		printf("%d is negative\n", n);
	return (0);

}