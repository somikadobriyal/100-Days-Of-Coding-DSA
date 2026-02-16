// Given an array of integers, count the frequency of each distinct element and print the result.

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int visited[100];   // To mark elements already counted
    int i, j, count;

    // Read size of array
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;   // initialize visited array
    }

    // Count frequency of each element
    for(i = 0; i < n; i++)
    {
        // Skip if already counted
        if(visited[i] == 1)
            continue;
        count = 1;  // current element appears at least once

        // Compare with rest of elements
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1; // mark as counted
            }
        }
        printf("%d:%d ", arr[i], count);
    }
    return 0;
}
