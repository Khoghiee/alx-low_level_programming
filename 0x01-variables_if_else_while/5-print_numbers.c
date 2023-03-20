
#include <stdio.h>

/**
 * main - Print all single digit number of base 10
 * starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
