// A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

#include <stdio.h>
int main() 
{
    int p, q;
    int a[100], b[100], c[200];
    int i = 0, j = 0, k = 0;

    // taking size of first log
    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    // taking elements of first log
    printf("Enter sorted arrival times of server 1:\n");
    for (i = 0; i < p; i++) 
    {
        scanf("%d", &a[i]);
    }

    // taking size of second log
    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    // taking elements of second log
    printf("Enter sorted arrival times of server 2:\n");
    for (i = 0; i < q; i++) 
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;

    // merging both sorted arrays
    while (i < p && j < q)
    {
        if (a[i] < b[j]) 
        {
            c[k] = a[i];
            i++;
        } else 
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // remaining elements of first array
    while (i < p) 
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // remaining elements of second array
    while (j < q) 
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged chronological log:\n");
    for (i = 0; i < k; i++) 
    {
        printf("%d ", c[i]);
    }
    return 0;
}
