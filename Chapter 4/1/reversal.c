#include <stdio.h>

/*
Write a program that asks the user to enter a two-digit number, then prints the number
with its digits reversed.
*/

int main(void)
{
	int n;

	printf("Enter a two-digit integer: ");
	scanf("%d", &n);

	printf("The reversal is: %d%d", n % 10, n / 10);

	return 0;
}