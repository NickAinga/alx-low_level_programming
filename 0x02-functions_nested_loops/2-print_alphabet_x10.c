#include "main.h"
/**
  *main - entry point
  *
  *reutrn: 0 success
  */
void print_alphabet_x10(void)
{
	int s, a;

	a = 0;

	while (a < 10)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		a++;
		_putchar('\n');
	}
}
