#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * main - Main function
 *
 * Return: exit status.
 */
int main(void)
{
	int d, u, i;

	bool cache[100];

	for (i = 0; i < 100; i++)
	{
		cache[i] = false;
	}

	for (d = 0; d <= 9; d++)
	{

		for (u = 0; u <= 9 ; u++)
		{
			if (u == d)
				continue;
			if (cache[10 * d + u] || cache[10 * u + d])
				continue;

			if (!(d == 0 && u == 1))
			{
				putchar(',');
				putchar(' ');
			}

			putchar('0' + d);
			putchar('0' + u);

			cache[10 * d + u] = true;
		}
	}

	putchar('\n');
	return (0);
}
