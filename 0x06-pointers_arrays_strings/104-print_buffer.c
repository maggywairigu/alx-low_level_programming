#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer to print
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* print offset */
		printf("%08x: ", i);

		/* print hex bytes */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		/* print ASCII bytes */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= ' ' && b[j] <= '~')
					printf("%c", b[j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
