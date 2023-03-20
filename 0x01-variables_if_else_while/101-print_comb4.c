#include <stdio.h>
/**
 * main - Prints different combinations of thre digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int l;

			for (l = 0; l <= 9; l++)
			{
				if (i != j && j != l && l != i && i < j && j < l)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(l + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
