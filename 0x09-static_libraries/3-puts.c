#include <stdio.h>

void _puts(char *str);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 */
void _puts(char *str)
{
	printf("%s\n", str);
}
