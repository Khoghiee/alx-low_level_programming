#include <stdio.h>

/**
 * main - Print alphabet in lowercase but exclude 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcase = 'a';

	while (lcase <= 'z')
	{
		if (lcase != 'e' && lcase != 'q')
		{
			putchar(lcase);
		}
		lcase++;
	}
	putchar('\n');
	return (0);
}
