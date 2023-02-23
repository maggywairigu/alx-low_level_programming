#include "main.h"
/**
 *more_numbers - prints 10 times numbers from 0 to 14
 *Description: you can only use _putchar three times
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
