#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcase_rev = 'z';

	while (lcase_rev >= 'a')
	{
		putchar(lcase_rev);
		lcase_rev--;
	}
	putchar('\n');
	return (0);
}
