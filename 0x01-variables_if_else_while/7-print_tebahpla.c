#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the lowercase alphabets in reverse order,
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int character = 122;

	while (character >= 97)
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
