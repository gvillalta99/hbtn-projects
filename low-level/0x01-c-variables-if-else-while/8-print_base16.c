#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Main function
 *
 * Return: exit status.
 */
int main(void)
{
	char alphabet[] = "0123456789abcdef";
    int c;

	for (c = 0; c <= 16 ; c++)
	{
		putchar(alphabet[c]);
	}

	putchar('\n');
	return (0);
}
