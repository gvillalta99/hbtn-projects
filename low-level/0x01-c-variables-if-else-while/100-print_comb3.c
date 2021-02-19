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
	int d, u;

	bool d_cache[10] = {false,false,false,false,false,false,false,false,false,false},
		u_cache[10] = {false,false,false,false,false,false,false,false,false,false};

	for (d = 0; d <= 9; d++)
	{
		for (u = 0; u <= 9 ; u++)
		{
			if (u == d)
				continue;
			if ((d_cache[d] && u_cache[u]) || (d_cache[u] && u_cache[d]))
				continue;

			putchar('0' + d);
			putchar('0' + u);

			if (!(d == 9 && u == 9))
			{
				putchar(',');
				putchar(' ');
			}

			d_cache[d] = true;
			u_cache[u] = true;
		}
	}

	putchar('\n');
	return (0);
}
