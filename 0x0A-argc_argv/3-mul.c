#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - multiplies two numbers
  *
  *@argc: argument counter
  *@argv: argument vector
  *
  *Return: 0 if it works, 1 if there is an ERROR
  */
int main(int argc, char *argv[])
{
	int n, m, diff;

	if (argc != 3)
	{
		print("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n*m;

	print("%i\n", diff);

	return(0);
}
