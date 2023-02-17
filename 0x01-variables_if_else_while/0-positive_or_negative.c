#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if the number is positive,negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(tine(0));
	n = rand() - RAND_MAX / 2;

	if  (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	(
	printd("%d is zero\n", n);
	}
	else
	(
	printf("%d is negatic=ve =\n", n);
	}
	return (0);
}
