#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible combinations of
 * two-digit numbers, separated by a , anf followed by a space
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int number1 = 48;
	int number2 = 48;

	while (number1 <= 57)
	{
		while (number2 <= 57)
		{
			if (number2 <= number1)
			{
				number2++;
				continue;
			}
			putchar(number1);
			putchar(number2);
			if (number1 < 56)
			{
				putchar(44);
				putchar(32);
			}
			number2++;
		}
		number1++;
		number2 = 48;
	}
	putchar('\n');
	return (0);
}
