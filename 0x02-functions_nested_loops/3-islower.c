#include "main.h"
/**
  *_islower - Return 1 if letter is lowercase, 0 if not.
  *@c: single letter input
  *Return: if int c is lowercase, 0 if otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
