#include <stdio.h>

/**
 * main - must print each size of various type
 * Return: 0 must be the output
 */
int main(void)
{

	printf("Size of a char: %d byte(s)\n", (int)  sizeof(char));
	printf("Size of a int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);

}
