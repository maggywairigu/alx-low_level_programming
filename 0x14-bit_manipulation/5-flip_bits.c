#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip to convert a number
 * from one to another.
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned int count;

	difference = n ^ m;
	count = 0;

	while (difference)
	{
		count++;
		difference &= (difference - 1);
	}

	return (count);
}
