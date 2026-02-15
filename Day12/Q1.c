//Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).

#include <stdio.h>
int main()
{
    int m, n;
    int a[100][100];
    int i, j;
    int symmetric = 1;  

    // take rows and columns
    scanf("%d %d", &m, &n);

    // take matrix elements
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // check if matrix is square
    if(m != n)
    {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // compare elements with transpose
    for(i = 0; i < m; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
        if(symmetric == 0)
            break;
    }
    if(symmetric)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");
    return 0;
}
