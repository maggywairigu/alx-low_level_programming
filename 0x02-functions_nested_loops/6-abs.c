#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@num: number for which the absolute is being computed
 *Return: the absolute value of num
 */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
