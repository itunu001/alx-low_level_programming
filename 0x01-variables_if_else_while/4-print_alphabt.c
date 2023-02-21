#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int character = 97;

	while (character <= 122)
	{
		if ((character == 101) || (character == 113))
		{
			character++;
			continue;
		}
		else
		{
			putchar(character);
			character++;
		}
	}
	putchar('\n');
	return (0);
}
