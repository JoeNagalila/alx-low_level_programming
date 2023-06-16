#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints if number is postive, negative or error
 * Return: 0 (Always)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}