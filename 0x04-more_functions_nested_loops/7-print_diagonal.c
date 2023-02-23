#include "main.h"
/**
 *print_diagonal - drawsa a diagonal line on the terminal
 *Description: You can only use _putchar function to print
 *@n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (i < 1)
		_putchar('\n');
}
