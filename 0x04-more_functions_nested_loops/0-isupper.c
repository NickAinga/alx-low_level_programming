#include "main.h"
/**
  *_isdigit - Check if a character ia upper
  *@x: The number to be checked
  *
  *Return: 1 for upper letter or 0 for any size
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
