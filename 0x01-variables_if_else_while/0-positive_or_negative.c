#include <stdlib.h>

#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
* main - negative or positive numbers
*
* Return: Always 0.
*/

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n == 0)
		printf("is zero\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is positive\n");
	return (0);

}
