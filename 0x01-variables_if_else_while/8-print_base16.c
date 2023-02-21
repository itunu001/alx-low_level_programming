#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all the numbers of base 16,
 * in lowercase, followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int character = 97;
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	while (character <= 102)
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
