#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is used to check if a number is
 * positive or negative or zero
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ans = n % 10;

	printf("Last digit of \%d is \%d ", n, ans);
	if (ans > 5)
		printf("and is greater than 5\n");
	else if (ans == 0)
		printf("and is zero\n");
	else if ((ans < 6) && (ans != 0))
		printf("and is less than 6 and not 0\n");
}
