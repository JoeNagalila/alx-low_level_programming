#include <unistd.h>

/**
 * main - prints the last part of the quote in the standard error
 * Retrun: 1 (Success)
 */
int main(void)

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
