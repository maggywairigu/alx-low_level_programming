#include <stdio.h>
/**
 *main - entry point
 *Description: finds and prints the sum of the even-valued terms
 *Return: 0
 */
int main(void)
{
	int i = 1, j = 2, sum = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
