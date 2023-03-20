#include <stdio.h>
/**
 * main - Prints combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, t, j, l, k;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		for (l = 0; l <= 9; l++)
		{
			for (k = 0; k <= 9; k++)
			{
				int left = i + j;
				int right = k + l;

				if (left < right)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(l + '0');
					putchar(k + '0');

					t = right + left;

					if (t < 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
