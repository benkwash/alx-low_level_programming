#include <stdio.h>

/**
 * main - entry point
 * Description: "Print if a randomly generated
 * number is positive, negative or zero"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		print(num);
	print("\n");
	return (0);
}
