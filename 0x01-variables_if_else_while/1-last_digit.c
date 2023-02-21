#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed.
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;

	if (n >= 0)
	{
		if ((mod) > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, (mod));
		else if ((mod) == 0)
			printf("Last digit of %d is %d and is 0\n", n, (mod));
		else if (((mod) < 6) && ((mod) != 0))
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (mod));
	}
	else if (n < 0)
	{
		if (((mod) * -1) == 0)
			printf("Last digit of  %d is %d and is 0\n", n, ((mod) * -1));
		else if (((mod) < 6) && (((mod) * -1) != 0))
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (mod));
	}
	return (0);
}
