#include <stdio.h>

/**
 * main - Prints combination of number separated by comma and space
 *
 * Values & Characters used [ASCII table]
 * 48 = 0
 * 57 = 9
 * 44 = ,
 * 32 = [SPACE]
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
