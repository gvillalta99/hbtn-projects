#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define IS_BIT_ENABLED(n, m) (((n) & (1 << (m))) >> (m))
#define SET_BIT(n, m) ((n) | (1 << (m)))

void sort(int c, int d, int u, int sorted[3])
{

	sorted[0] = (u <= d && u <= c ? u : (d <= u && d <= c ? d : c));

	sorted[1] = (u <= d ?
				 (u <= c ? (d <= c ? d : u) : u) :
				 (d <= c ? (u <= c ? u : c) : d));
	sorted[2] = (u <= d ?
				 (u <= c ? (d <= c ? c : d) : d) :
				 (d <= c ? (u <= c ? c : u) : u));
}

void xprint(int sorted[3])
{
    printf("(%d) \n", 100 * sorted[2] + 10 * sorted[1] + sorted[0]);
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

				if (u == d || d == c || u == c) {
					continue;
                }
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
