#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, row, col, highest;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    highest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    for (row = highest; row >= 1; row--)
    {
        for (col = 0; col < n; col++)
        {
            if (arr[col] >= row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (col = 0; col < n; col++)
    {
        printf("-");
    }
    return 0;
}