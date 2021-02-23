#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define IS_BIT_ENABLED(n, m) (((n) & (1 << (m))) >> (m))
#define SET_BIT(n, m) ((n) | (1 << (m)))

void sort(int c, int d, int u, int sorted[3])
{

	sorted[2] = (u <= c ? (u <= d ? u : d) : (c <= d ? c : d));
	sorted[1] = (u <= c ?
				 (u <= d ? (c <= d ? c : d) : u) :
				 (u <= d ? u : (c <= d ? d : c)));
	sorted[0] = (u > c ?
				 (u > d ? u : (d > c ? d : c)) :
				 (c > d ? c : d));
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
	int counter = 0;

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
				sort(c, d, u, sorted);

				if (u == d || d == c || u == c)
					continue;
				if (cached[100 * sorted[2] + 10 * sorted[1] + sorted[0]])
					continue;

				cached[100 * sorted[2] + 10 * sorted[1] + sorted[0]] = true;
				if (counter != 0)
				{
					putchar(',');
					putchar(' ');
				}
				counter++;

				putchar('0' + c);
				putchar('0' + d);
				putchar('0' + u);
			}
		}
	}

	putchar('\n');
	return (0);
}
