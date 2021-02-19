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

	bool d_cache[10] = {false,false,false,false,false,false,false,false,false,false};
	bool u_cache[10];

	for (d = 0; d <= 9; d++)
	{
		for(i = 0; i < 10; i++)
			u_cache[i] = false;

		for (u = 0; u <= 9 ; u++)
		{
			if (u == d)
				continue;
			if (d_cache[d] && u_cache[u])
				continue;
			if (d_cache[u] && u_cache[d])
				continue;

			putchar('0' + d);
			putchar('0' + u);

			if (!(d == 9 && u == 9))
			{
				putchar(',');
				putchar(' ');
			}

			u_cache[u] = true;
		}
		d_cache[d] = true;
	}

	putchar('\n');
	return (0);
}
