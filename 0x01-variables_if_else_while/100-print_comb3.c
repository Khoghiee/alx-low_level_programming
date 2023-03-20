#include <stdio.h>

/**
 * main - Prints combination of two digits separated by comma and space
 * Values & Characters used [ASCII]
 * 48 = 0
 * 56 = 8
 * 57 = 9
 * 44 = ,
 * 32 = [SPACE]
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 48;

	while (b <= 57)
	{
		int a = 48;

		while (a <= 57)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if (a == 57 && b == 56)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
			a++;
		}
		b++;
	}
	putchar('\n');

	return (0);
}
