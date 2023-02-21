#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@num: number from where we get the digit
 *Return: value of the last digit
 */
int print_last_digit(int num)
{
	int digit;

	if (num < 0)
	{
		digit = -1 * (num % 10);
		_putchar(digit + '0');
		return (digit);
	}
	else
	{
		digit = num % 10;
		_putchar(digit + '0');
		return (digit);
	}
}
