#include <stdio.h>
#include <stdib.h>
#include<time.h>
/**
  *main -n Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n> 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		print("%d is zero\n", n);
	else
		printf("%d is a negative\n", n);

	return (0);
}