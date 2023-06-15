#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printif("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printif("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printif("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printif("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printif("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
