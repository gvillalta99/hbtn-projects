#include <stdlib.h>
#include <unistd.h>

/**
 * main - Main function
 *
 * Return: exit status.
 */
int main(void)
{
	char phrase[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, phrase, 60);
	return (1);
}

