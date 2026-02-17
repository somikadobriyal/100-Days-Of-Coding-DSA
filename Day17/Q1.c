// Write a program to find the maximum and minimum values present in a given array of integers.

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int i;
    int max, min;

    // take size of array
    scanf("%d", &n);

    // take array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // assume first element as max and min
    max = arr[0];
    min = arr[0];

    // check remaining elements
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // print results
    printf("Max: %d\n", max);
    printf("Min: %d", min);
    return 0;
}
