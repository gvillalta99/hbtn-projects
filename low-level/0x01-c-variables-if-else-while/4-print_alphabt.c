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

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	}

	putchar('\n');
	return (0);
}
