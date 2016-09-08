#include <stdio.h>

/*
Rearrange square3.c so that the for loop initializes i, tests i,
and increments i. Don't rewrite the program; in particular, do
not use any multiplications.
*/

int main(void)
{
	int n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	odd = 3;
	for (int i = 1, square = 1; i <= n; odd += 2, ++i) {
		printf("%10d%10d\n", i, square);
		square += odd;
	}

	return 0;
}