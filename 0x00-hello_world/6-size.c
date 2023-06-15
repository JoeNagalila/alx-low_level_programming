#include<stdio.h>
/**
 * main - A Program that prints various computer types
 * Return 0 (Passed)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printif("Size of a char: %lu bytes(s)\n",(unsigned long)sizeof(a));
printif("Size of an int: %lu bytes(s)\n",(unsigned long)sizeof(b));
printif("Size of a long int: %lu bytes(s)\n",(unsigned long)sizeof(c));
printif("Size of a long long int: %lu bytes(s)\n",(unsigned long)sizeof(d));
printif("Size of a float: %lu bytes(s)\n",(unsigned long)sizeof(f));
return (0);
}
