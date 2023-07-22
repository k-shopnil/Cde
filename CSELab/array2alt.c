#include <stdio.h>
int main()
{
    int a[10], n, i, small, large;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    small = large = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    printf("The largest element: %d\n", large);
    printf("The smallest element: %d\n", small);
}
