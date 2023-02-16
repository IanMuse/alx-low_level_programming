#include <stdio.h>
/**
 * main - program printing the size of various types based on computer run on
 * Return: always 0
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
