#include <stdio.h>

/**
 * main - main function
 *
 * Return: always (0)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
	for (j = 0; j <= 99; j++)
	{
	if (i <= j)
	{
		putchar('0' + (i / 10));
		putchar('0' + (i % 10));
		putchar(' ');
		putchar('0' + (j / 10));
		putchar('0' + (j % 10));

		if (i < 99 || j < 99)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}

	putchar('\n');
	return (0);
}
