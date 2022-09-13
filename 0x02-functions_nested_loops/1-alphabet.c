#include "main.h"
/**
  *print_alphabet - a function that prints the alphabet, in lowercase
  *
  *Return: 0 Success
  */
void print_alphabet(void)
{
	int d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
