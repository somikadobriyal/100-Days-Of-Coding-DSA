#include <stdio.h>
int main() 
{
    int n, k ,i ;
    int arr[100];
    int found = 0;
    int comparisons = 0;

    // taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // taking array elements
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // taking key to search
    printf("Enter key to search: ");
    scanf("%d", &k);

    // linear search
    for (i = 0; i < n; i++) 
    {
        comparisons++;          
        if (arr[i] == k) 
        {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    // if element not found
    if (found == 0) 
    {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", comparisons);
    return 0;
}
