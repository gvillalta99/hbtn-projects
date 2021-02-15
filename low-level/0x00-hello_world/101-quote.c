#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * write_str - Replacement for printf, puts, etc
 *
 * Return: exit status.
 */
void write_str(char *string, int n)
{
	int len = strlen(string);

	n = (n > 0) ? n : 1;

	if ((write(n, string, len)) != len)
	{
		write(2, "Error occurred", 16);
		exit(2);
	}
}

/**
 * main - Main function
 *
 * Return: exit status.
 */
int main(void)
{
	char phrase[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write_str(phrase, 0);
	return (1);
}

