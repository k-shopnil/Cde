#include <stdio.h>
int main()
{
    int a[100][100], i, j;
    // a[100]={{1,2,3},{1,2,3}}
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n"); // traversing the array below
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]= %d ", i, j, a[i][j]);
        }
        printf("\n");
    }
}