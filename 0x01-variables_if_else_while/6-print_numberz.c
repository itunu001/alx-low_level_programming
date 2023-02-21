#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints single digit numbers of base 10 from 0,,
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
