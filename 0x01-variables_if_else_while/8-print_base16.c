#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int m;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
