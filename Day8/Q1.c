// Given integers a and b, compute a^b using recursion without using pow() function.

#include <stdio.h>
// recursive function to calculate power
int power(int a, int b) 
{
    // base case
    if (b == 0)
        return 1;

    // recursive call
    return a * power(a, b - 1);
}

int main() 
{
    int a, b;

    // taking input
    scanf("%d %d", &a, &b);

    // printing result
    printf("%d", power(a, b));

    return 0;
}

