#include <stdio.h>
void main()
{
    int n, i, t, k;
    scanf("%d", &t);
    scanf("%d", &n);
    int arr[n];
    for (k = 0; k <= n - 1; k++)
    {
        scanf("%d", &arr[k]);
    }
    for (k = 0; k <= n - 1; k++)
    {
        printf("%d", arr[k]);
    }
}