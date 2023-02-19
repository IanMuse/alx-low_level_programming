#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar(n + '0');
		if (n < 10)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
