#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Return: (0) Sucess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is negative\n");
	}
	if else(n > 0)
	{
		printf("is positive\n");
	}
	else
	return (0);
}
