#include "main.h"

/**
 * main - Entry point
 * Return: 0 on success
*/

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}