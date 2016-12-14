#include <stdio.h>

/*
The power function of Section 9.6 can be made faster by having it calculate x^n in a
different way. We first notice that if n is a power of 2, then x^n can be computed
by squaring. For example. x^4 is a square of x^2, so x^4 can be computed using only
two multiplications instead of three. As it happens, this technique can even be used
when n is not a power of 2. If n is even, we use the formula x^n = (x^(n/2))^2. If
n is odd, then x^n = x * x^(n-1). Write a recursive function that computes x^n. (The
recursion ends when n = 0, in which case the function returns 1.) To test your function,
write a program that asks the user to enter values for x and n, calls power to compute
x^n, and then displays the value returned by the function.
*/

int power(int x, int n);


int main(void)
{
	int x, n;

	printf("Computes x^n using specified values.\n\n");

	printf("Enter x value: ");
	scanf("%d", &x);
	printf("Enter n value: ");
	scanf("%d", &n);

	printf("Result of %d^%d: %d", x, n, power(x, n));

	return 0;
}


int power(int x, int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		if(n % 2 == 0)
		{
			return power(x, n / 2) * power(x, n / 2);
		}
		else
		{
			return x * power(x, n - 1);
		}
	}
}