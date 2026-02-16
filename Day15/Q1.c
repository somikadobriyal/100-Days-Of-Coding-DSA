// Q. Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

#include <stdio.h>
int main()
{
    int m, n;
    int a[50][50];
    int i, j;
    int sum = 0;

    // Read dimensions
    scanf("%d %d", &m, &n);

    // Read matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum of primary diagonal
    int limit = (m < n) ? m : n;
    for(i = 0; i < limit; i++)
    {
        sum += a[i][i];
    }
    printf("%d", sum);
    return 0;
}
