#include "main.h"

/**
  *_isalpha - a function that checks for alphabetic character
  *@c: single letter input
  *Return: 1 if c is a letter (lower or uppercase), 0 otherwise
  */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && 123))
		return (1);
	else
		return (0);
}
