#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: "Print if a randomly generated
 * number is positive, negative or zero"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int last;
	last = n % 10;
	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %d is %d and is less than 6\n", n, last);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	return (0);
}