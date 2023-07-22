#include <stdio.h>
int main()
{
    int a[100], i, n, count = 0, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
            else
                continue;
        }
    }
    printf("Total number of duplicate elements in this array: %d", count);
}