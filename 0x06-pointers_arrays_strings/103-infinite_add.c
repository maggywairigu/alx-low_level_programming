#include "main.h"
#include <stddef.h>
/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i = 0, j = 0, sum = 0, carry = 0;

	/* Find the lengths of the two numbers */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if the result can fit in the buffer */
	if (len1 > size_r || len2 > size_r)
		return (0);

	/* Add the digits starting from the least significant digit */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (r == NULL || size_r <= 0)
			return (0);
		r[size_r - 1] = sum % 10 + '0';
		carry = sum / 10;
		size_r--;
	}

	/* Add the terminating null byte */
	if (size_r <= 0)
		return (0);
	r[size_r - 1] = '\0';

	/* If there is still carry left, the result does not fit in the buffer */
	if (carry != 0)
		return (0);

	/* Move the result to the beginning of the buffer */
	while (*r == '0' && *(r + 1) != '\0')
		r++;
	return (r);
}
