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
	int d, u;

	for (d = '0'; d <= '9'; d++)
	{
		for (u = '0'; u <= '9' ; u++)
		{
			putchar(d);
			putchar(u);

			if (d != '9' || u != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
