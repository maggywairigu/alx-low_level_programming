#include "main.h"
/**
 *binary_to_uint - convert a binary to an unsigned int
 *@b: string to be converted
 *Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int sum, power;
  int i;

  if (b == NULL)
    return (0);

  for (i = 0; b[i]; i++)
    {
      if (b[i] != '0' && b[i] != '1')
	return (0);
    }

  for (power = 1, sum = 0, i--; i >= 0; len--, power *= 2)
    {
      if (b[i] == '1')
	sum += power;
    }

  return (total);
}
