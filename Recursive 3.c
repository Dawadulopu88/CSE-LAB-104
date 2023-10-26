#include <stdio.h>
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 6;
	printf("%dth Fibonacci Number: %d", n, fib(n));
	return 0;
}

