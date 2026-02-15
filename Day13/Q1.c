//  You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.

#include <stdio.h>
int main()
{
    int r, c;
    int a[100][100];
    int i, j;

    // take size
    scanf("%d %d", &r, &c);

    // take matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Boundary variables
    int top = 0;
    int bottom = r - 1;
    int left = 0;
    int right = c - 1;

    // Spiral traversal
    while(top <= bottom && left <= right)
    {
        // 1. Top row (left → right)
        for(j = left; j <= right; j++)
            printf("%d ", a[top][j]);
        top++;

        // 2. Right column (top → bottom)
        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        // 3. Bottom row (right → left)
        if(top <= bottom)
        {
            for(j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);
            bottom--;
        }

        // 4. Left column (bottom → top)
        if(left <= right)
        {
            for(i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
    return 0;
}