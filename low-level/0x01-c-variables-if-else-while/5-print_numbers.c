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
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
