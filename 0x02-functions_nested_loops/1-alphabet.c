#include "main.h"
/**
 *print_alphabet -print the alphabet in lowercase
 *Return: The alphabet in lowercase
 *main - entry point
 *Return: 0 Always
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
