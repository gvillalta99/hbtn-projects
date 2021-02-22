#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define IS_BIT_ENABLED(n, m) (((n) & (1 << (m))) >> (m))
#define SET_BIT(n, m) ((n) | (1 << (m)))

/**
 * compare - used on qsort
 *
 * Return: exit status.
 */
int compare(const void *x, const void *y)
{
	return (*((int *) x) - *((int *) y));
}

/**
 * main - Main function
 *
 * Return: exit status.
 */
int main(void)
{
	int cached[1000], sorted[3];
	int c, d, u;

	for (u = 0; u < 1000; u++)
	{
		cached[u] = false;
	}

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			for (u = 0; u <= 9 ; u++)
			{
				sorted[0] = c;
				sorted[1] = d;
				sorted[2] = u;

				qsort(sorted, 3, sizeof(int), compare);

				if (u == d && d == c)
					continue;
				if (cached[100 * sorted[2] + 10 * sorted[1] + sorted[0]])
					continue;

				cached[100 * sorted[2] + 10 * sorted[1] + sorted[0]] = true;

				if (!(c == 0 && d == 0 && u == 1))
				{
					putchar(',');
					putchar(' ');
				}

				putchar('0' + c);
				putchar('0' + d);
				putchar('0' + u);
			}
		}
	}

	putchar('\n');
	return (0);
}
