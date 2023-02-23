#include "main.h"
#include <stdio.h>
/**
 * print_number - Function that prints an integer.
 * @n: number to be printed
 * Description: Can only use _putchar to print.
 */
#include <stdio.h>

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	int divisor = 1;
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = (n / divisor) % 10;
		putchar('0' + digit);
		divisor /= 10;
	}
}
