#include "main.h"
#include <stdio.h>
/**
 *main - prints the program name
 *@srgc: argument count
 *@argv: array of string of program name
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
