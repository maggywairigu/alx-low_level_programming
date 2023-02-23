#include "main.h"
/**
 *print_diagonal - drawsa a diagonal line on the terminal
 *Description: You can only use _putchar function to print
 *@n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
	    putchar('\n');
	    return;
    }

    for (int i = 0; i < n; i++)
    {
	    for (int j = 0; j < i; j++)
	    {
		    putchar(' ');
	    }
	    putchar('\\');
	    putchar('\n');
    }
}
