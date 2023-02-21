#include "main.h"
/**
 *print_sign - Prints the sign of a number
 *@num: the number whose sign is being checked
 *Return: The sign of the number num
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
        {
		_putchar('-');
		return (-1);
	}
}
