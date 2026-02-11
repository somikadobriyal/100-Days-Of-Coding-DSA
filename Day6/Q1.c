// Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

#include <stdio.h>
int main() 
{
    int n;
    int arr[100];
    int i, j;

    // read size of array
    scanf("%d", &n);

    // read sorted array elements
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // index for unique elements
    j = 0;

    // remove duplicates in-place
    for (i = 1; i < n; i++) 
    {
        if (arr[i] != arr[j]) 
        {
            j++;
            arr[j] = arr[i];
        }
    }
    for (i = 0; i <= j; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
