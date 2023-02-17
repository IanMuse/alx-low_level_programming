#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - determines whether number is zero, positive or negative
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
=======
 * main - Entry point
 * Return: 0
 */
int main(void)

{
int n;

srand(time(0));
n = raind() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d i negative\n", n);
}
return (0);
>>>>>>> 85866d2ca57fe8e609115a65a2b7c3ff2d0d1b03
}
