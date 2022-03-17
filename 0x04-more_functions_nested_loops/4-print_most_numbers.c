#include "main.h"
/**
 * print_most_numbers - prints the numbers interleaved
 *
 * Return: numbers
 */
void print_most_numbers(void)
{
	int numb;

	for (numb = 0 ; numb <= 9 ; numb++)
	{
		if (numb != 2 && numb != 4)
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
