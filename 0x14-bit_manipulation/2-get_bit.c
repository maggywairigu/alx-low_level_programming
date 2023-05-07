#include "main.h"
/**
 *get_bit - gets the value of a bit t a given index
 *@n: number to check
 *@index: index of the bit we ant to get
 *Return: Value of a bit at index, -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;

	if (index > 64)
		return (-1);

	result = n >> index;

	return (result & 1);
}
