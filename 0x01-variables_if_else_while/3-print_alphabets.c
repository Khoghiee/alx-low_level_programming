#include <stdio.h>

/**
 * main - Prints alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a', UPPERCASE = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (UPPERCASE <= 'Z')
	{
		putchar(UPPERCASE);
		UPPERCASE++;
	}
	putchar('\n');
	return (0);
}
