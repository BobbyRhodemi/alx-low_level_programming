#include "main.h"

/**
<<<<<<< HEAD
 *print_numbers - print the numbers from 0 up to 9
=======
 *print_numbers - print the numbers since 0 up to 9
>>>>>>> e6ad4fc73642722829457a0af883fd507a900aff
 *
 *Return: The numbers from 0 up to 9
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
