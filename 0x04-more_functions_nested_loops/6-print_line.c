#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *Description: only use printchar to print
 *@n: number of time the character _ should be printed
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
