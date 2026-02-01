// Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

#include <stdio.h>
int main() {
    int n, pos, x;
    int arr[100];   // array with extra space
    int i;

    // taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // taking array elements
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // taking position (1-based)
    printf("Enter position to insert (1-based): ");
    scanf("%d", &pos);

    // taking element to insert
    printf("Enter element to insert: ");
    scanf("%d", &x);

    // shifting elements to the right
    for (i = n; i >= pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    // inserting the element
    arr[pos - 1] = x;

    // printing updated array
    printf("Updated array:\n");
    for (i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

