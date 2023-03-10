#include "main.h"
#include <stdio.h>
/**
 *main - prints the numbers of argments
 *@argc: number of args
 *@argv: array of string of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
