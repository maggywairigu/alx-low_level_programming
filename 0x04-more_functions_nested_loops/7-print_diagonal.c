#include "main.h"
/**
 *print_diagonal - drawsa a diagonal line on the terminal
 *Description: You can only use _putchar function to print
 *@n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
