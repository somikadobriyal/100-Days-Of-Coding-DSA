// Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

#include <stdio.h>
// recursive function to find nth fibonacci number
int fib(int n) 
{
    // base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // recursive call
    return fib(n - 1) + fib(n - 2);
}

int main() 
{
    int n;

    // taking input
    scanf("%d", &n);

    // printing nth fibonacci number
    printf("%d", fib(n));

    return 0;
}
