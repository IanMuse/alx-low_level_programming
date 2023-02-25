#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int x, c;

	c = 0;
	while (c < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		c++;
		_putchar('\n');
	}
}
