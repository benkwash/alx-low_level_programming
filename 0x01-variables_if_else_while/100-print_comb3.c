#include <stdio.h>

/**
 * main - entry point
 * Description: "Print if a randomly generated
 * number is positive, negative or zero"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first < 9; first++)
	{
		for (second = 1; second < 10; second++)
		{
			if (first != second && second > first)
			{
				putchar('0' + first);
				putchar('0' + second);
				if (first != 8 || second != 9)
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
