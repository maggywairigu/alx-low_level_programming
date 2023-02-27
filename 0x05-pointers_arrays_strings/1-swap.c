#include "main.h"
/**
 *swap_int  - swaps two values
 *@a: pointer to the first value
 *@b: pointer to the second value
 *Description: swaps the values between *a and *b
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
