#include "main.h"

/**
 * rot13 - function
 * @a: string
 * Return: string
 */

char *rot13(char *a)
{
	char leet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chan[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (a[i] == leet[j])
			{
				a[i] = chan[j];
				break;
			}
		}
	}
	return (a);
}
