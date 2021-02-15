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
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit == 0)
		printf("0");
	else if (last_digit < 6)
		printf("less than 6 and not 0");
	else
		printf("greater than 5");


	printf("\n");

	return (0);
}
