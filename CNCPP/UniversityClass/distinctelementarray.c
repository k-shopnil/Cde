#include <stdio.h>
int main()
{
    int a[100], n, i, j, cntr;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        cntr = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cntr++;
            }
        }
        if (cntr == 0)
        {
            printf("%d ", a[i]);
        }
    }
}