#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 when successful
 */

int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
