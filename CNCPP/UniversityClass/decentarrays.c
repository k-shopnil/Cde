#include <stdio.h>
int main()
{
    int a[100], i, j, n, flag = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}