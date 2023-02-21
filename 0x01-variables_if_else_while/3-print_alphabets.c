#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabet in lowercase,
 * and then uppercase, followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
