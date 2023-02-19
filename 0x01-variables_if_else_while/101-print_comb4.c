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
	int third;

	for (first = 0; first < 9; first++)
	{
		for (second = 1; second < 10; second++)
		{
			for (third = 2; third < 10; third++)
				if (first < second && second < third)
				{
					putchar('0' + first);
					putchar('0' + second);
					putchar('0' + third);

					if (first != 7 || second != 8 || third != 9)
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
