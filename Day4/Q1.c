#include <stdio.h>
int main() 
{
    int n ,i ;
    int arr[100];
    int left, right, temp;

    // taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // taking array elements
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // two pointers
    left = 0;
    right = n - 1;

    // reversing the array
    while (left < right) 
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
