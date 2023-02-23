#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		_putchar(n + "is positive");
	else if (n < 0)
	        _putchar(n + "is negative");
	else
		_putchar(n + "is zero");
}
int main(void)
{
        int i;

        i = 0;
        positive_or_negative(i);

        return (0);
}
