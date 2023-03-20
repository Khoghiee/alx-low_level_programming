#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 without
 * using the type 'char' on any variable
 *
 * Values & Characters used [ASCII table]
 * 48 = 0
 * 57 = 9
 * 58 = : (I varied it as 10)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
	putchar(i);
	i++;
	}
	putchar('\n');

	return (0);
}
