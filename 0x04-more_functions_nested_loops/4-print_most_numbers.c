#include "main.h"
/**
 *print_most_numbers - prints numbers from 0 to 9 except from 2 and 4
 *Description: you can only use _putchar twice
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
