#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: array of integers
 *@n: number of elements
 *Description: Numbers must be separated by comma, followed by a space
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
