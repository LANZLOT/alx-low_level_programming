#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point generates a random password
 * Return: password
 */

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);
	return (0);
}
