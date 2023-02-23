#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: number to be printed
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	long p;
	int b;
	long num;

	num = n;
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	p = 1;
	b = 1;
	while (b)
	{
		if (num / (p * 10) > 0)
			p *= 10;
		else
			b = 0;
	}

	while (num >= 0)
	{
		if (p == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / p % 10) + '0');
			p /= 10;
		}
	}
}
