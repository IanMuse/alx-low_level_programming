#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *@c: single letter input
 * Return: if lowercase return 1, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
