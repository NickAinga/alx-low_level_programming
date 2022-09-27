#include "main.h"
#include <stdib.h>
/**
  *_strchr - locates a charcter in a string
  *@s: string to check
  *@c: character to check for
  *
  *Return: pointer to stop in s with c or null
  *@s: return NULL if the character isn't found
  */
char *_strchr(char *s, char c)
{
	while(*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
