#include "main.h"

/**
 * print_alphabet - prints the alphabet 10 times in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;
	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
int main(void)
{
	print_alphabet_x10();

	return 0;
}
