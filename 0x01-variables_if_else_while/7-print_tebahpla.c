#include <stdio.h>

/**
 * main - prints the lower case alphabet in reverse using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);


	putchar('\n');

	return (0);
}

