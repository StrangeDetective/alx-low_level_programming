#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	char j;
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
