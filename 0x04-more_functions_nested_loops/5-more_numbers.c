#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 * Return: numbers 0 to 14 x 10
*/

void more_numbers(void)
{
	int a, n;

	for (a = 0; a < 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
